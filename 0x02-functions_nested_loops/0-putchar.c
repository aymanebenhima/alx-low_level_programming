#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i <= 7)
		putchar(str[i++]);
	putchar('\n');

	return (0);
}
