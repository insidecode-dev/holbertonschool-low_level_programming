#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j;
for (j = '0'; j < '9' + 1; j++)
{
putchar(j);
if (j != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
