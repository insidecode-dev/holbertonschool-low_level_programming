#include <string.h>
#include <stdlib.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to character
 * @src: pointer to character
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
	dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}
