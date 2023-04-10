#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int dec_vals = 0;

	if (!b)
		return (0);

	for (g = 0; b[g]; g++)
	{
		if (b[g] < '0' || b[g] > '1')
			return (0);
		dec_vals = 2 * dec_vals + (b[g] - '0');
	}

	return (dec_vals);
}
