#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int v, count = 0;
	unsigned long int currentz;

	for (v = 63; v >= 0; v--)
	{
		currentz = n >> v;

		if (currentz & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
