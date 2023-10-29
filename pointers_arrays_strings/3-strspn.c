/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: pointer to character
 * @accept: pointer to character
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *ptr = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = ptr;
		if (flag == 0)
		break;
	}
	return (count);
}
