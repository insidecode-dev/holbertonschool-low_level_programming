#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
	int result;

	numCoins = 0;
	result = 0;
	if (argc != 2)
	{
	print_word();
	return (1);
	}
	if (atoi(argv[1]) == 0)
	{
		print_zero();
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		print_zero();
		return (1);
	}
	numCoins = minCoins(cents);
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

/**
 * minCoins - Entry point
 * @amount: count of argumentsinteger
 * Return: Always 0 (Success)
 */
int minCoins(int amount);
int minCoins(int amount)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int count;
	int i;

	count = 0;
	if (amount < 0)
	{
		return (0);
	}

	for (i = 0; i < numCoins; i++)
	{
	while (amount >= coins[i])
	{
		amount -= coins[i];
		count++;
	}
	}

	return (count);
}

/**
 * print_zero - Entry point
 * Return: Nothing
 */
void print_zero(void);
void print_zero(void)
{
	_putchar('0');
	_putchar('\n');
}

/**
 * print_word - Entry point
 * Return: Nothing
 */
void print_word(void);
void print_word(void)
{
	char *word = "Error";

	while (*word)
	{
	_putchar(*word);
	word++;
	}
}
