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
	int i;
	int arr_int[100];
	int sum;
	char *word = "Error";
	int result;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		while (argv[i])
		{
			if (atoi(argv[i]) != 0)
			sum += atoi(argv[i]);
			else
			{
				while (*word)
				{
					_putchar(*word);
					word++;
				}
				return (1);
			}
			argv[i]++;
		}
		i++;
	}

	while (sum)
	{
		result = result * 10 + sum % 10;
		sum /= 10;
	}

	while (result)
	{
		_putchar(result % 10 + '0');
		result /= 10;
	}
	return (0);
}
