#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for lower case character
 * @c: single letter input
 * Return: 1 if c is lowercase else return 0
*/
int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);

}
