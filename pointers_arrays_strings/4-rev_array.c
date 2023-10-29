/**
 * reverse_array - reversing integer valued array
 * @a: integer array
 * @n: size of integer
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	if (n % 2 != 0)
		{
		while (i < (n - 1) / 2)
		{
			a[i] ^= a[n - i - 1];
			a[n - i - 1] ^= a[i];
			a[i] ^= a[n - i - 1];
			i++;
		}
		}

	else
		{
		while (i <= (n / 2) - 1)
		{
			a[i] ^= a[n - 1];
			a[n - 1] ^= a[i];
			a[i] ^= a[n - 1];
			i++;
		}
		}
}
