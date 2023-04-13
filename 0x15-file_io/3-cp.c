#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
/**
 * main - copies the content of a file to another file.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int from, to;
	ssize_t num_read, num_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
				exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRGRP | S_IROTH);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", to);
			exit(99);
	}
	while ((num_read = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(to, buffer, num_read);
		if (num_written != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", to);
				exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %ld\n", num_read);
			exit(98);
	}
	if (close(to == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
			exit(100);
	}
	if (close(from == -1))
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", from);
			exit(100);
	}
	return (0);
}
