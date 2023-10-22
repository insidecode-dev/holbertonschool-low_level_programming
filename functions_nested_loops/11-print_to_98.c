#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 * Description: This function prints all natural numbers from n to 98
 **/
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != n)
{
_putchar(',');
_putchar(' ');
}
if (i < 0)
{
_putchar('-');
if (i <= -10)
{
_putchar((abs(i) / 10 + '0'));
_putchar((abs(i) % 10 + '0'));
}
if (i >= 10 && i < 100)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
else if (i >= 0)
{
_putchar(i + '0');
}
if (i >= 100)
{
_putchar(i / 100 + '0');
_putchar((i / 10) % 10 + '0');
_putchar(i % 10 + '0');
}
else if (i <= -100)
{
_putchar('-');
_putchar(i / 100 + '0');
_putchar((i / 10) % 10 + '0');
_putchar(i % 10 + '0');
}
}
}
}
else
{
for (i = n; i >= 98; i--)
{
if (i != n)
{
_putchar(',');
_putchar(' ');
}
if (i >= 10 && i < 100)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i >= 100)
{
_putchar(i / 100 + '0');
_putchar((i / 10) % 10 + '0');
_putchar(i % 10 + '0');
}
}
}
_putchar('\n');
}
