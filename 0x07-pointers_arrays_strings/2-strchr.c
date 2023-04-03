
/**
 * _strchr - locates a character in a string
 * @s: C string to be scanned
 * @c:  character to be searched in str
 * Return: a pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]  != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
