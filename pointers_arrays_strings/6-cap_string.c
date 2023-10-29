#include <ctype.h>
/**
 * cap_string - capitalizes all words in string
 * @str: pointer to character
 * Return: pointer to character
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (isalpha(*str) && isalpha(*(str + 1)) &&
			(*(str - 1) == ' ' || *(str - 1) == '\t'
			 || *(str - 1) == '.'))
		{
			*str = toupper(*str);
		}
		str++;
	}
	return (ptr);
}
