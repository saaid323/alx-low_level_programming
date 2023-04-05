/**
 * look - looks for prime number
 * @i: int parameter
 * @j: int parameter
 * Return: Returns 1 if it is prime else 0
 */

int look(int i, int j)
{
	if (i == j)
		return (1);
	else if (j % i == 0)
		return (0);
	return (look(i + 1, j));
}

/**
 * is_prime_number - looks for prime number
 * @n: int parameter
 * Return: Returns 1 if it is prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (look(2, n));
}
