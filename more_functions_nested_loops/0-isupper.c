/**
 * _isupper - checks if character is uppercase
 * @c: character
 * Return: On success 1.
 */
int _isupper(int c)
{
	if (c > 65 && c < 91)
		return (1);
	return (0);
}
