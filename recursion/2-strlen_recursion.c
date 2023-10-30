#include "main.h"
/**
 * _strlen_recursion - prints length of a character
 * @s: pointer to character
 * Return: size of character
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
