#include "main.h"
#define BUFFER_SIZE 1024

/**
 * check_error - checks if there was an error and exits if so
 * @check: the return value to check for an error
 * @error_message: the error message to display if there is an error
 */

void check_error(int check, char *error_message)
{
	if (check == -1)
	{
		perror(error_message);
		exit(EXIT_FAILURE);
	}
}

/**
 * main - opies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: return EXIT_SUCCESS if success
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, num_read, num_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	fd_from = open(argv[1], O_RDONLY);
	check_error(fd_from, "Error opening source file");
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
		S_IRGRP | S_IWGRP | S_IROTH);
	check_error(fd_to, "Error opening destination file");
	while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);
		check_error(num_written, "Error writing to destination file");
	}
	check_error(num_read, "Error reading from source file");
	check_error(close(fd_from), "Error closing source file");
	check_error(close(fd_to), "Error closing destination file");
	return (EXIT_SUCCESS);
}
