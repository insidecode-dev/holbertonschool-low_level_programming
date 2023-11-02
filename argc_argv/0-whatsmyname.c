#include "main.h"
#include <string.h>
/**
 * main - Entry point
 * @argv: pointer to character
 * Return: Always 0 (Success)
 */
int main(char *argv[])
{
	size_t i;

	i = 0;
	while (i < strlen(argv[0]))
	{
	_putchar(argv[0][i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
