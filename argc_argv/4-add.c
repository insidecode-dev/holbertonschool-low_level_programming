#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: pointer to character
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	char *word = "Error";
	int result;
	char *ptr[100];

	i = 1;
	sum = 0;
	result = 0;
	if (argc == 0)
	{
		_putchar('0');
		return (0);
	}
	while (i < argc)
	{
		ptr[i] = argv[i];
		while (*argv[i])
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				while (*word)
				{
					_putchar(*word);
					word++;
				}
				_putchar('\n');
				return (1);
			}
			argv[i]++;
		}
		sum += atoi(ptr[i]);
		i++;
	}
	_print(sum, result);
	return (0);
}

/**
 * _print - Entry point
 * @sum: integer
 * @result: integer
 * Return: Nothing
 */
void _print(int sum, int result);
void _print(int sum, int result)
{
	int zero;

	zero = 0;
	while (sum)
	{
		if (sum == 0)
		zero++;
		result = result * 10 + sum % 10;
		sum /= 10;
	}

	while (result)
	{
		putchar(result % 10 + '0');
		result /= 10;
	}

	while (zero)
	{
		_putchar('0');
		zero--;
	}
	_putchar('\n');
}
