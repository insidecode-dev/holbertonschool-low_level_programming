#include "main.h"
/**
 * print_last_digit - returns and prints last digit of a number
 * @c: character
 * Description: This function returns and prints last digit of a number
 * Return: Integer
 **/
int print_last_digit(int c)
{
char last_digit;
last_digit = c % 10;
_putchar(last_digit);
return (last_digit);
}
