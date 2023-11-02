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
	int result2;
	char *word = "Error";

	result2 = 0;
	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		while (result)
		{
			result2 = result2 * 10 + result % 10;
			result /= 10;
		}
		while (result2)
		{
			_putchar(result2 % 10 + '0');
			result2 /= 10;
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
