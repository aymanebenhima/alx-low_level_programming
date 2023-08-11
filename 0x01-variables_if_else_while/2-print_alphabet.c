#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters in lowercase.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet++);
	}
	putchar('\n');

	return (0);
}
