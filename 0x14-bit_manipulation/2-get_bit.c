#include "main.h"

/**
* get_bit - this function  returns the
* value of a bit at a given index.
* @n: unsigned long int argument
* @index: unsigned int
* Return: the  value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int keep;

	if (index > 64)
		return (-1);

	keep = n >> index;

	return (keep & 1);
}
