#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: the number to use in printing the binary number
 */

void print_binary(unsigned long int n)
{
	int k, add = 0;
	unsigned long int num;

	for (k = 63; k >= 0; k--)
	{
		num = n >> k;
		if (num & 1)
		{
			_putchar('1');
			add++;
		}

		else if (num)
			_putchar('0');
	}

	if (!add)
		_putchar('0');
}
