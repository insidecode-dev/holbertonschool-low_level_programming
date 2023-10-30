#include "main.h"
/**
 * _print_rev_recursion - writes the character c to stdout
 * @s: pointer to character
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}
