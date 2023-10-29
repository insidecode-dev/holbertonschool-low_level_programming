#include <stdio.h>
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: pointer to character
 * @accept: pointer to character
 * Return:  pointer to character
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
