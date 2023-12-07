#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that copies the content of a file to a another file
 *
 * @argc: This is the number of arguments
 * @argv: This is a argument passed
 *
 * Return: 0 on succes, other values on failure
 */
int main(int argc, char **argv)
{
	int source_fd, dest_fd, bytes_written, bytes_read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(source_fd) == -1 || close(dest_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
