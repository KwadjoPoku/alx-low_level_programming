#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char j;
	int p = 0;

	while (p <= 9)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	p++;
	}
}