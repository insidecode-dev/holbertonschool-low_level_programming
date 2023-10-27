#include<stdio.h>
/**
 * swap_int - swaps values of two integers
 * @a: integer
 * @b: integer
 * Description: This function swaps values of two integers
 * Return: Nothing
 **/
void swap_int(int *a, int *b)
	{
	  int temp = *a;
	  *a = *b;
	  *b = temp;
	}
