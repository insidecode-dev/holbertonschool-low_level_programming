#include <ctype.h>
/**
 * cap_string - capitalizes all words in string
 * @a: pointer to character
 * Return: pointer to character
 */
char *cap_string(char *a)
{
	char *ptr = a;

	while (*str)
	{
		if (isalpha(*str) && isalpha(*(str + 1)) && !isalpha(*(str - 1)))
		{
			*str = toupper(*str);
		}
		else if (*(str + 1) == '\t')
		*(str + 1) = ' ';
		str++;
	}

	return (ptr);
}
