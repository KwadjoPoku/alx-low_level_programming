#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, counts = 0;
	unsigned long int currentz;
	unsigned long int exclusived = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		currentz = exclusived >> b;
		if (currentz & 1)
			counts++;
	}

	return (counts);
}
