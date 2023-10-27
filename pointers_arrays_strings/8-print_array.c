#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array pointer
 * @n: integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (a[i] != '\0')
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
