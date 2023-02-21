#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i = 0;
	char j;

	while (i <= 'z')
	{
		j = 'a';
		while (j < 10)
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
