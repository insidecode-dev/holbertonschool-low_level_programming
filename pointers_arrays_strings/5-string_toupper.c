#include <string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: pointer to character
 * Return: pointer to character
 */
char *string_toupper(char *a)
{
	char *ptr = a;

	while (*a)
	{
		if (islower(*a))
		*a = toupper(*a);
		a++;
	}
	return (ptr);
}
