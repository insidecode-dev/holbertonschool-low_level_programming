#include <stddef.h>
/**
 * _strstr -  a function that locates a substring.
 * @haystack: pointer to character
 * @needle: pointer to character
 * Return:  pointer to character
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
