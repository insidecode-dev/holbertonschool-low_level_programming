#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = '0'; i < '9' + 1; i++)
{
for (j = '0'; j < '9' + 1; j++)
{
putchar(i);
putchar(j);
putchar('\n');
}
}
putchar('\n');
return (0);
}
