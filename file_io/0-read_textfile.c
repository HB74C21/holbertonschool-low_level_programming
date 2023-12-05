#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - Function that reads a text file and prints it to the posix
 *			standard output
 * @filename: This is a pointer to the file
 * @letters: This is the number of letters to the texte file
 *
 * Return: The number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t num_read;
	ssize_t num_write;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	num_read = read(fd, buffer, letters);

	num_write = write(1, buffer, num_read);

	if (num_write == -1)
		return (0);

	free(buffer);
	close(fd);

	return (num_write);

}
