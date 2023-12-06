#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - Function that creates a file
 *
 * @filename: This is a pointer to the file
 * @text_content: This is a file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 *		file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	ssize_t write_result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		write_result = write(fd, text_content, len);
	}

	if (write_result == -1)
		return (-1);

	close(fd);

	return (1);
}
