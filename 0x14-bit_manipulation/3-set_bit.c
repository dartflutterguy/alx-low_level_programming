#include "main.h"

/**
* set_bit - this function that sets the
* value of a bit to 1 at a given index.
* @n: unsigned long int pointer
* @index:  unsigned int
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 64)
		return (-1);

	for (a = 1; index > 0; index--, a *= 2)
		;
	*n += a;

	return (1);
}
