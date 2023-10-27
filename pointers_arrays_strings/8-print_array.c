#include "main.h"
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
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
