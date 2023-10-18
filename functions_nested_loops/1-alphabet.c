#include "main.h"
/**
  * print_alphabet - prints alphabet in lowercase
  * Description: This function prints alphabet in a lowercase
  **/
void print_alphabet(void)
{
char i = 'a';
while (i != 'z' + 1)
{
_putchar(i);
i++;
}
_putchar('\n');
}
