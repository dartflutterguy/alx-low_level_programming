#include "main.h"
#include <ctype.h>

/**
* _isupper - function for uppercase
* @c: takes in an argument
* Return: 1 if c is uppercase and 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
