#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = '0'; i < '9' + 1; i++)
putchar(i);
for (i = 'a'; i < 'f' + 1; i++)
putchar(i);
putchar('\n');
return (0);
}
