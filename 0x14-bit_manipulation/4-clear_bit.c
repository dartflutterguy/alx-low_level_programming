#include "main.h"

/**
* clear_bit - this function converts a binary number to an unsigned int
* @n: int argument
* @index: int argument
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int keep;

	if (index > 64)
		return (-1);
	keep = index;
	for (a = 1;  keep > 0; a *= 2, keep--)
		;
	if ((*n >> index) & 1)
		*n -= a;

	return (1);
}
