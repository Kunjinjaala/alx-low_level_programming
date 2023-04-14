#include "main.h"
#include <stdlib.h>


/**
 * read_textfile- Read text file print to STDOUT.
 *
 * @filename: text file.
 *
 * @letters: number of letters to be read
 *
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t t_read;
	ssize_t t_w;
	ssize_t fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	t_read = read(fd, buf, letters);
	buf[t_read] = '\0';

	t_w = write(STDOUT_FILENO, buf, t_read);
	close(fd);
	free(buf);

	return (t_w);
}
