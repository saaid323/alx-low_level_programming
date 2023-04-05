
/**
 * _sqrt - returns the natural square root of a number
 * @i: int parameter
 * @j: int parameter
 * Return: if i does not have sqrt the function should return -1
 * else it returns sqrt of i
 */

int _sqrt(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (_sqrt(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int parameter
 * Return: if n does not have sqrt the function should return -1
 * else it returns sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return  (1);
	return (_sqrt(1, n));
}
