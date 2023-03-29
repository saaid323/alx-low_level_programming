
/**
 * _strncpy - function that copies a string
 * @dest: pointer to string
 * @src: pointer to a string
 * @n: int argument
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, de;

	de = 0;
	while (dest[de] != '\0')
		de++;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[de] = '\0';
	return (dest);
}
