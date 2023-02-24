#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program
 * Return: Always 0 (winner)
 */

int main(void)
{
	int g;

	for (g = 1; g <= 100; g++)
	{
	if ((g % 3 == 0) && (g % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (g % 3 == 0)
	{
	printf("Fizz");
	}
	else if (g % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", g);
	}
	if (g != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
