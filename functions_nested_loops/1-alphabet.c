#include "main.h"
void print_alphabet(void);

void print_alphabet()
{
char i = 'a';
while (i != 'z' + 1)
{
_putchar(i);
i++;
}
_putchar('\n');
}
