#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: The pointer to character to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
