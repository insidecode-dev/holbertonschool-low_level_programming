/**
 * _memcpy - a function that copys memory area
 * @dest: pointer to character
 * @src: pointer to character
 * @n: unsigned integer
 * Return: pointer to character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ptr);
}
