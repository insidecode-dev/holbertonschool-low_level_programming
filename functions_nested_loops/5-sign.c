#include "main.h"
#include <ctype.h>
/**
 * print_sign - prints sign of number
 * @n: integer
 * Description: This function prints sign of number
 * Return: Integer
 **/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return ('1');
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
