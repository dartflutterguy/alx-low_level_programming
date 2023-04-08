#include "main.h"
#include <stdbool.h>

/**
* binary_to_uint - this function converts a binary number to an unsigned int
* @b: char string
* Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	bool bin_value = true;
	unsigned int outcome = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		char a = b[i];
		if (a == '0' || a == '1')
			outcome = (outcome << 1) + (a - '0');
		else
		{
			bin_value = false;
			break;
		}
	}
	if (bin_value)
		return (outcome);
	else
		return (0);
}
