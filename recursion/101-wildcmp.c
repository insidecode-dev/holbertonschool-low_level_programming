/**
 * wildcmp - identifies if strings can be considered as identical
 * @s1: character to pointer
 * @s2: character to pointer
 * Return: On success 1.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '\0')
	{
		return (0);
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
	if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
	{
		return (1);
	}
	}
	return (0);
}
