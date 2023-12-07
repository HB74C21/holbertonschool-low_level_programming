#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: This is a pointer to the file
 * @text_content: This is a file
 *
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int length_string = 0;
	int write_result = 0;
	int open_fd = 0;

	if (filename == NULL)
		return (-1);

	open_fd = open(filename, O_APPEND | O_WRONLY);
	if (open_fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length_string] != '\0')
			length_string++;

		write_result = write(open_fd, text_content, length_string);
		if (write_result == -1)
			return (-1);
	}

	close(open_fd);

	return (1);
}
