#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends pf input and add together for size
 * @s1: input ont to concat
 * @s2: input two to concat
 * Return: concat os s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
