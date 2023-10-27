#include <string.h>
#include "main.h"
/**
 * _strcpy - copies string to another
 * @dest: pointer to character
 * @src: pointer to character
 * Return: pointer to character
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	i = 0;
	while (i < strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
