#include "main.h"
/**
 * _puts_recursion - prints string with recursion
 * @s: pointer to character
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
