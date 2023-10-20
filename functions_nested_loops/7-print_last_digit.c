#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - returns and prints last digit of a number
 * @c: character
 * Description: This function returns and prints last digit of a number
 * Return: Integer
 **/
int print_last_digit(int c)
{
int last_digit;
last_digit = c % 10;
_putchar(abs('0' + last_digit));
return (last_digit);
}
