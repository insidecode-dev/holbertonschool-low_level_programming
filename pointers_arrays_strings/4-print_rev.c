#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: The pointer to character to print
 * Return: Nothing
 */
void print_rev(char *s)
	{
		int i;

		i = strlen(s) - 1;
		for (; i >= 0; i--)
			_putchar(s[i]);
		_putchar('\n');
	}
