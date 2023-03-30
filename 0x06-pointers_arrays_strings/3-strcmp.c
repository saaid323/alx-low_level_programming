
/**
 * _strcmp - compares two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, s;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			s = 0;
			break;
		}
		else
		{
			s = s1[i] - s2[i];
			break;
		}
		s++;
	}
	return s;
}
