
/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to string
 * @src: pointer to string
 * @n: interger argument
 * Return: Return a pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, de;

	de = 0;
	while (dest[de] != '\0')
		de++;
	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[de + i] = src[i];
	}
	dest[de + i] = '\0';
	return (dest);
}
