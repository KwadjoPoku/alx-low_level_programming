#include "main.h"

/**
 * print_square - Print n squares according n number of times
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)
{
	int e, f;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (e = 0; e < size; e++)
	{
	for (f = 0; f < size; f++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
