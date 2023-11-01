#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: On match 0, on unmatch .
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		s1++, s2++;
		else
		return (*s1 - *s2);
	}
	return (0);
}
