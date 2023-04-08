#include "main.h"
#include <stdio.h>

/**
* print_binary -  a function that prints the binary representation of a number
* @n: int number
* Return: 0
*/
void print_binary(unsigned long int n)
{
	unsigned long int a;
	int conv;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (a = n, conv = 0; (a >>= 1) > 0; conv++)
		;

	for (; conv >= 0; conv--)
	{
		if ((n >> conv) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
