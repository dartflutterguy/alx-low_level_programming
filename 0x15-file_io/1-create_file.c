#include "main.h"

/**
* create_file - a function that creates a file
* @filename: the name of the file to be created
* @text_content: is a NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, lent = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
		lent++;
	}

	opn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	wrt = write(opn, text_content, lent);
	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);

	return (1);
}
