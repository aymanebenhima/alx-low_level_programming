/**
 * _strstr - locates a substring
 *
 * @haystack: input pointer to char type
 * represents the string to be searched
 * @needle: input pointer to char type
 * represents the substring to be located
 *
 * Return: A pointer to the beginning of the located
 *       substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (0);
}