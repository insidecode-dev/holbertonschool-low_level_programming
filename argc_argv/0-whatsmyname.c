#include "main.h"
#include <string.h>
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: pointer to character
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	size_t i;

	(void)argc;
	i = 0;
	while (i < strlen(argv[0]))
	{
	_putchar(argv[0][i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
