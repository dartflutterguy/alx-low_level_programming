#include "main.h"
#include <stdlib.h>

/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output.
* @filename: pointer variable to the name of the file
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t opn, rd, wrt;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	opn = open(filename, O_RDONLY);
	rd = read(opn, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buf);
		return (opn);

	}
	free(buf);
	close(opn);
	return (wrt);
}
