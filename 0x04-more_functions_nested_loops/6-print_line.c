#include "main.h"

/**
 * print_lin - Draws a straight line according to param
 * @r: the number of lines
 * Return: empty
 */
void print_line(int r)
{
	int k;

	if (r <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 0; k < r; k++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
