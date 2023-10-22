#include "main.h"
#include <ctype.h>
/**
 * times_table - prints times table
 * Description: This function prints times table
 **/
void times_table(void)
{
int i, j, main;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
main = (i * j) / 10;
if(((i * j) % 10) == main)
{
_putchar(' ');
}
_putchar('0' + main);
main = (i * j) % 10;
if (main != ((i * j) / 10))
{
_putchar('0' + main);
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
