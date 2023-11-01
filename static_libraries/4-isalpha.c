#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if character is letter
 * @c: character
 * Description: This function prints 1 if character is alphabetic, o otherwise
 * Return: Integer
 **/
int _isalpha(int c)
{
if (isalpha(c))
return (1);
return (0);
}
