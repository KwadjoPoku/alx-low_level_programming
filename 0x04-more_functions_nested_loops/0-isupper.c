#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @v: the number to checked
 * Return: 1 for the upper letter or 0 for any else
 */

int _isupper(int v)
{
	if (v >= 65 && v <= 90)
	{
	return (1);
	}
	return (0);
}
