#include "main.h"

/**
* append_text_to_file - a function that appends text at the end of a file.
* @filename: is the name of the file
* @text_content: is the NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int lent = 0, wrt, opn;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent]; )
		lent++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, lent);

	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
