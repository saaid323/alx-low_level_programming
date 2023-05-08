#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - opies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success else 1
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(1);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		printf("Error: Cannot read from file %s\n", argv[1]);
		exit(1);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		printf("Error: Cannot write to file %s\n", argv[2]);
		exit(1);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			printf("Error: Cannot write to file %s\n", argv[2]);
			exit(1);
		}
	}
	if (bytes_read == -1)
	{
		printf("Error: Cannot read from file %s\n", argv[1]);
		exit(1);
	}
	if (close(fd_from) == -1)
	{
		printf("Error: Cannot close file descriptor %d\n", fd_from);
		exit(1);
	}
	if (close(fd_to) == -1)
	{
		printf("Error: Cannot close file descriptor %d\n", fd_to);
		exit(1);
	}
	return (0);
}
