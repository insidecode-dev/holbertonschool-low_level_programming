#include <ctype.h>
#include <string.h>
/**
 * leet - encodes string into 1337
 * @s: pointer to character
 * Return: pointer to character
 */
char *leet(char *s)
{
	int i, j;
	char subs[10], str[10];

	i = 0;
	subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		if (s[i] == str[j])
			s[i] = subs[j];
	  i++;
	}
	return (s);
}
