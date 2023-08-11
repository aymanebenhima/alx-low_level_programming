#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all numbers of base 1à starting from 0.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%i", i++);
	}
	putchar('\n');

	return (0);
}
