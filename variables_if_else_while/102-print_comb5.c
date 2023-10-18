#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i, j, k, d;
  for (i = '0'; i <= '9'; i++)
    {
      for (j = '0'; j <= '9'; j++)
	{
	  for (k = i; k <= '8'; k++)
	    {
	      for (d = j+1; d <= '9'; d++)
		{
		  putchar(i);
		  putchar(j);
		  putchar(' ');
		  putchar(k);
		  putchar(d);
		  if (!(i == '9' && j == '9' && k == '8' && d == '9'))
		    {
		      putchar(',');
 		      putchar(' ');
		    }
		}
	    }
	}
    }
  putchar('\n');
  return (0);
}
