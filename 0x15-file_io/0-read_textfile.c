#include "main.h"

/**
 * read_textfile - reads and prints out to standard output
 * @filename: is the pathname for open
 * @letters: is the size
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	O = open(filename, O_RDONLY);
	if (O == -1)
		return (0);

	r = read(O, buff, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
		return (0);

	free(buff);
	close(O);
	return (r);
}
