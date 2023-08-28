/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: input pointer to char type
 *  represents the string to be searched
 * @accept: input pointer to char type
 * represents the string containing the characters to match
 *
 * Return: A pointer to the byte in s that matches one of the
 *        bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}