#include "main.h"

/**
 * _strcmp - compares pointers to two string
 * @1: pointer to the first string to be compared
 * @2: pointer to the second string to be compared
 * Return: if str1 < str2, negate the difference of the firsst unmatch characters
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the first unmatch characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
