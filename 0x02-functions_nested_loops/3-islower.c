#include "main.h"
#include  <ctype.h>

/**
 * _islower - checks for lower case character
 * @c: single letter input
 * Return: 1 if c is lowercase else return 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
