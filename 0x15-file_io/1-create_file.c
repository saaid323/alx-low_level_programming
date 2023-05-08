#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes = 0, total_bytes = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[total_bytes] != '\0')
		total_bytes++;
	written_bytes = write(fd, text_content, total_bytes);
	if (written_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
