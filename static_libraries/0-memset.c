/**
 * _memset - a function that fills memory with constant bytes
 * @s: pointer to character
 * @b: pointer to character
 * @n: unsigned integer
 * Return: pointer to character
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
