#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 * Return: numbers since 0 up to 9
 */

void print_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
	_putchar(y + '0');
	}
	_putchar('\n');
}
