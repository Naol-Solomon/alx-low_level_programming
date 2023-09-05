#include "main.h"

/**
 * main - is main of the prigram
 * @argc: is issgn
 * @argv: is issgnnd
 * Return: return sl o
 */
int main(int argc, char *argv[])
{
	int inFD, outFD, r;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	inFD = open(argv[1], O_RDONLY);
	if (inFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	outFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((r = read(inFD, buf, 1024)) > 0)
	{
		if (write(outFD, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if (close(inFD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inFD), exit(100);
	}
	if (close(outFD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", outFD), exit(100);
	}
	return (0);
}
