#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (wins)
 */

int main(void)
{
	char u;

	u = 'a';
	while
		(u <= 'z') {
			if ((u != 'q' && u != 'e') && u <= 'z')
				putchar(u);
			u++;
		}
	putchar('\n');
	return (0);
}
