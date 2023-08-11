#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters in lowercase (reversed).
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet--);
	}
	putchar('\n');

	return (0);
}
