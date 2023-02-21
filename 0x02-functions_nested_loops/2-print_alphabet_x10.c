#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			_putchar(j);
		}

		_putchar(i);
	}
}
