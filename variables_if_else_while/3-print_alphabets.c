#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, k = 123;
for (i = 97; i < k; i++)
{
putchar(i);
if (i == 122)
i = 'A' - 1, k = 'Z' + 1;
}
putchar('\n');
return (0);
}
