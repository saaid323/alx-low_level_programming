
/**
 * _strcmp - compares two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, s = 0, st1 = 0, st2 = 0;

	i = 0;
	while (s1[st1] != '\0')
		st1++;
	while (s2[st2] != '\0')
		st2++;
	for (i = 0; i <= st1; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			s = s1[i] - s2[i];
			break;
		}
		else
		{
			s = 0;
		}
	}
	return (s);
}
