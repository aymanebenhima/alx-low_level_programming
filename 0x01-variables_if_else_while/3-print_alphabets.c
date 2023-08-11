#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters in lowercase, and then in uppercase followeb by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int j = 65;
	int i = 97;

	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
