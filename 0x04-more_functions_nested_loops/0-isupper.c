#include "main.h"

/**
* isupper - function for uppercase
* @c 
* Return: 1 if c is uppercase
* Return: 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);

}