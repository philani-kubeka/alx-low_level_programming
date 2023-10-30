#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 *
 * @letters: amount of letters
 * @filename: pointter
 *
 * Return: letter or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _open, _read, _write;
	char *_buffer;

	if (filename == NULL)
		return (0);

	_buffer = malloc(sizeof(char) * letters);

	if (_buffer == NULL)
		return (0);

	_open = open(filename, O_RDONLY);
	_read = read(_open, _buffer, letters);
	_write = write(STDOUT_FILENO, _buffer, _read);

	if (_open < 0 || _read < 0)
	{
		free(_buffer);
		return (0);
	}
	free(_buffer);
	close(_open);

	if (_write < 0)
		return (0);

	return ((ssize_t)_write);
}
