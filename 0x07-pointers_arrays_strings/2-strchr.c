/**
 * _strchr - a function that locates
 *         a character in a string
 *
 * @s: input pointer to char type
 *   represents the string to be searched
 * @c: input variable of char type
 *  represents the character to be located
 *
 * Return: A pointer to the first occurrence
 *        of the character @c in the string @s
 *       or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}