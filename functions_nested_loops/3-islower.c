#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if character is in lowercase
 * @c: type of parameter is integer
 * Description: This function checks if character is in lowercase
 * Return: 1 if character is lowercase, 0 otherwise
 **/
int _islower(int c)
{
if (islower(c))
return (0);
else if (islower(c) == 0)
return (1);
}
