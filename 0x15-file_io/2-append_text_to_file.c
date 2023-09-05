#include "main.h"

/**
 * append_text_to_file - appends to the end of a file
 * @filename: is name of file
 * @text_content: is a null terminated string appended to the end
 * Return: returns 1 on success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
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

	o = open(filename, O_RDWR | O_APPEND);
	if (o == -1)
		return (-1);

	w = write(o, text_content, length);
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
