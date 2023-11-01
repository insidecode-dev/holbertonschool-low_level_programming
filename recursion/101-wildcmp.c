/**
 * wildcmp - identifies if strings can be considered as identical
 * @s1: character to pointer
 * @s2: character to pointer
 * Return: On success 1.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		while (*s2 == '*')
		{
			s2++;
		}
	if (*s2 == '\0')
	{
		return (1);
	}
	while (*s1 != '\0')
	{
		if (wildcmp(s1, s2))
		{
			return (1);
		}
		s1++;
	}
	return (0);
	}

	if (*s1 == '\0' || *s2 == '\0')
	{
	return (*s1 == *s2);
	}
	if (*s1 == *s2 || *s2 == '?')
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
