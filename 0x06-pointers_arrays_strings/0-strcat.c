
/**
 * _strcat - concatenates two strings
 * @dest: Pointer to string
 * @src: Pointer to string
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int s, i;

	s = 0;
	while (dest[s] != '\0')
		s++;
	for (i = 0; src[i] != '\0' && i <= s; i++)
	{
		dest[s + i] = src[i];
	}
	dest[i + s] = '\0';
	return (dest);
}
