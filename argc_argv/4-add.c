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
				printf("\n");
				return (1);
			}
			argv[i]++;
		}
		sum += atoi(ptr[i]);
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

	printf("\n");
	return (0);
}
