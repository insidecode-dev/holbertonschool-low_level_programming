#include<stdio.h>
#include<string.h>
/**
 * rev_string - reverses a string
 * @s: The pointer to character
 * Return: Nothing
 */
void rev_string(char *s)
{
	size_t i;

	i = strlen(s);
	if (i % 2 == 0)
	{
		for (; i < (strlen(s) / 2); i++)
		{
			s[i] = (s[i] + '0') + (s[(strlen(s) - (i + 1))] + '0');
			s[(strlen(s) - (i + 1))] = s[i] - s[(strlen(s) - (i + 1))];
			s[i] = s[i] - s[(strlen(s) - (i + 1))];
		}
	}
	else
	{
		for (; i < ((strlen(s) / 2) - 1); i++)
		{
			s[i] = (s[i] + '0') + (s[(strlen(s) - (i + 1))] + '0');
			s[(strlen(s) - (i + 1))] = s[i] - s[(strlen(s) - (i + 1))];
			s[i] = s[i] - s[(strlen(s) - (i + 1))];
		}
	}
}
