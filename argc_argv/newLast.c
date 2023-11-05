#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: pointer to character
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *word = "Error";
	int cents;
	int numCoins;
	int coinValues[] = {25, 10, 5, 2, 1};
	int numCoinValues;
	int result;

	result = 0;
	if (argc != 2)
	{
		while (*word)
		{
			_putchar(*word);
			word++;
		}
	_putchar('\n');
	return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
	_putchar('0');
	_putchar('\n');
	return (0);
	}
	numCoinValues = sizeof(coinValues) / sizeof(coinValues[0]);
	for (int i = 0; i < numCoinValues; i++)
	{
	numCoins += cents / coinValues[i];
	cents %= coinValues[i];
	}
	while (numCoins)
	{
		result = result * 10 + numCoins % 10;
		numCoins /= 10;
	}
	while (result)
	{
		_putchar(result % 10 + '0');
		result /= 10;
	}
	_putchar('\n');
	return (0);
}
