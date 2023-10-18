#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i = 'a';
while (i != 'z' + 1)
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}
