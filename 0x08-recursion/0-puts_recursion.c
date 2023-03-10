#include "main.h"

/**
 * _puts_recursion - Print a string that followed by a new line
 * @s: the string to print
 * Return: 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
		s++;
	_puts_recursion(s);
}
