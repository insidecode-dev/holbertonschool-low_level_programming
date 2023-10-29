#include <string.h>
/**
 * _strncat - concatenates two strings at most n bytes
 * @src: pointer to character
 * @dest: pointer to character
 * @n: count of bytes to be appended
 * Return: pointer to character
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
	dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (ptr);
}
