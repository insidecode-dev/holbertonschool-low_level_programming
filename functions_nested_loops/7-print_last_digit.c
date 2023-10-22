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
int last_digit, current_digit;
current_digit = c % 10;
last_digit = abs(current_digit);
_putchar(('0' + last_digit));
return (abs(last_digit));
}
