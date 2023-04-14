#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: Name of the file to create.
 *
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, t_w, len;

	if (filename == NULL)
		return (-1);

	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	t_w = write(fd, text_content, len);

	if (fd == -1 || t_w == -1)
		return (-1);

	close(fd);

	return (1);
}
