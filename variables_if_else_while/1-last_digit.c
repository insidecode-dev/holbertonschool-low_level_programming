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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ld = n % 10;
printf("Last digit of %d is %d ", n, ld);
if (n == 0)
printf("and is 0");
else if (n > 5)
printf("and is greater than 5");
else
printf("and is less than 6 and not 0");
return (0);
}
