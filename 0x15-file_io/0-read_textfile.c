#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	FILE *fp;


	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	buf = malloc(letters + 1);

	if (buf == NULL)
	fclose(fp);
	return (0);

	t_read = fread(buf, 1, letters, fp);
	buf[t_read] = '\0';

	t_w = fwrite(buf, 1, t_read, stdout);
	fclose(fp);
	free(buf);

	return (t_w);
}
