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
	char *ptr;
	size_t i;
	int sz;

	i = 0;
	sz = strlen(dest) + strlen(src) + 1;
	ptr = (char *) malloc(sz * sizeof(char));
	for (i = 0; i < strlen(src); i++)
	ptr[i] = src[i];
	for (i = 0; i < strlen(dest); i++)
	ptr[strlen(src) + i] = dest[i];
	ptr[sz] = '\0';
	return (ptr);
}
