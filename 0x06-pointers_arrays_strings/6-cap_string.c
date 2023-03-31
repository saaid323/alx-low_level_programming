/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string
 * Return: s
 */

char *cap_string(char *s)
{
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 34, 63, 40, 41, 123, 125};
	int len, i;

	while (s[len] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[len] == sep[i] && (s[len + 1] >= 'a' && s[len + 1] <= 'z'))
			{
				len++;
				s[len] -= 32;
			}
		}
		len++;
	}
	s[len] = '\0';
	return (s);
}
