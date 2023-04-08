#include "main.h"

/**
* get_endianness - this function that checks the endianness.
* Return: 0 if big endian, 1 if little endian
*/
int  get_endianness(void)
{
	int fig = 1;
	
	if (*(char *) &fig == 1)
		return (1);
	else
		return (0);
}
