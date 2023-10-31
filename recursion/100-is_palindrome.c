#include <string.h>
/**
 * is_palindrome - character to pinter
 * @c: character to pointer *
 * Return: On success 1.
 */
int is_palindrome(char *c)
{
	size_t i;

	i = strlen(c);
	if (i == 1 || i == 0)
		return (1);
	if (c[0] != c[i - 1])
		return (0);
	c[i - 1] = '\0';
	c++;
	return (is_palindrome(c));
}
