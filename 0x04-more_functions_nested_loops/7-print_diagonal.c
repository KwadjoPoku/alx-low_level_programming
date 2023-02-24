#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines
 * @b: The number of lines to print
 * Return: empty
 */

void print_diagonal(int b)
{
	int p, q;

	if (b <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (p = 0; p < b; p++)
	{
	for (q = 0; q < p; q++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
