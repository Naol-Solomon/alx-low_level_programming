#include "main.h"

/**
 * create_file - creates a file if it exist
 * @filename: name of fil
 * @text_content: is a null terminated string
 * Return: returns 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[length])
	{
		length++;
	}

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
		return (-1);

	w = write(o, text_content, length);
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
