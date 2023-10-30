#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 *
 * @filename: ppointer
 * @text_content: string
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _open, _write, len = 0;

	if (filename == NULL)
		return (-1);

	_open = open(filename, O_RDWR | O_APPEND);

	if (_open < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(_open);
		return (1);
	}

	while (*(text_content + len))
		len++;

	_write = write(_open, text_content, len);
	close(_open);

	if (_write < 0)
		return (-1);

	return (1);
}
