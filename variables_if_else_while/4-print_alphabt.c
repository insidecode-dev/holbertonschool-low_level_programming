#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'a'; i < 'z' + 1; i++)
{
if (i == 'q' || i == 'e')
continue;
putchar(i);
}
putchar('\n');
return (0);
}
