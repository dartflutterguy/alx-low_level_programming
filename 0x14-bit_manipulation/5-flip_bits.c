#include "main.h"

/**
* flip_bits - this function that returns the number of bits
* needed to flip to get from one number to another
* @n: long int argument
* @m: long int argument
* Return: the converted number, or 0
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sep;
	int track;

	sep = n ^ m;
	track = 0;

	while (sep)
	{
		track++;
		sep &= (sep - 1);
	}
	return (track);
}
