#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'z'; i > 'a' - 1; i--)
putchar(i);
putchar('\n');
return (0);
}
