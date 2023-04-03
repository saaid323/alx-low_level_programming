
/**
 * _memset - fill memory with a constant byte
 * @s: This is a pointer to the block of memory to fill
 * @b: This is the value to be set
 * @n: This is the number of bytes to be set to the value
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
