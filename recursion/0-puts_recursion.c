#include "main.h"
/**
 * _puts_recursion - prints string with recursion
 * @s: pointer to character
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
