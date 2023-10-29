/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer to chharacter
 * @c: character variable
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		return (s);
		s++;
	}
	if (c == *s)
	return (s);
	return (NULL);
}
