#include <ctype.h>
#include <string.h>
#include <limits.h>
/**
 * _atoi - converts string to integer
 * @s: pointer to character
 *
 * Return: converted digit
 */
int _atoi(char *s)
	{
		int i, m, val, isMinus;

		m = 0, val = 0, isMinus = 0;
		for (i = 0; s[i] != '\0'; i++)
		{
			if (isdigit(s[i]))
			{
			  if (val > (INT_MAX - (s[i] - '0')) / 10)
				{
					if (isMinus == 0)
						return INT_MAX;
					else
						return INT_MIN;
			  	}
				val = val * 10 + (s[i] - 48);
				m = 1;
				if (s[i - 1] == '-')
				isMinus = 1;
			}
			else
			{
				if (m == 1)
					return (isMinus == 0 ? val : val * (-1));
			}
		}
		return (isMinus == 0 ? val : val * (-1));
	}
