#include <string.h>
/**
 * _strncpy - copies a string
 * @src: pointer to character
 * @dest: pointer to character
 * @n: count of bytes to be copied
 * Return: pointer to character
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && *src)
		{
		*dest = *src;
		dest++;
		src++;
		n--;
		}
	while (n > 0)
		{
		*dest = '\0';
		dest++;
		n--;
		}
	return (ptr);
}
