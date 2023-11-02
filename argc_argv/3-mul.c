#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: pointer to character
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result;
	char *word = "Exit";

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		while (sum)
		{
			_putchar(sum % 10 + '0');
			sum /= 10;
		}
		_putchar('\n');
		return (0);
	}

	while (*word)
	{
		_putchar(*word);
		word++;
	}
	_putchar('\n');
	return (0);
}
