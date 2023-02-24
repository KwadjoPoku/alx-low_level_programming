#include "main.h"

/**
 * print_most_numbers - print 0 up to 9
 * Description: Print numbers without 2 and 4
 * Return: The numbers 0 to 9
 */

void print_most_numbers(void)
{
	int v = 0;

	for (; v <= 9; v++)
	{
	if (v == 2 || v == 4)
	{
	continue;
	}
	else
	{
	_putchar(v + '0');
	}
	_putchar('\n');
	}
}
