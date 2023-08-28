/**
 * _memcpy - a function that copies
 *         memory area
 *
 * @dest: input pointer to char type
 *    represents buffer where we will copy to
 * @src: input variable of char type
 *    represents the character what we are to copy
 * @n: unsigned int variable
 *    the number of bytes to be filled
 *
 * Return: A pointer to @dest
 *         the memory area @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}