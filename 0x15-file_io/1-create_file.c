#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: pointer
 * @text_content:  a NULL terminated string to write to the file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int _open, _write, len = 0;

	if (filename == NULL)
		return (-1);

	_open = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (_open < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	_write = write(_open, text_content, len);

	close(_open);
	if (_write < 0)
		return (-1);

	return (1);
}
