#include "main.h"

/**
 * print_triangle - Prints a triangle of square
 * @size: size of square triangles
 * Return: empty
 */

void print_triangle(int size)
{
	int v, b, n;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (v = 0; v < size; v++)
	{
	for (b = size - v; b > 1; b--)
	{
	_putchar(32);
	}
	for (n = 0; n <= v; n++)
	{
	_putchar(35);
	}
	}
	_putchar('\n');
	}
}
