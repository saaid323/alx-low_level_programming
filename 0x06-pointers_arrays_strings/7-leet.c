

/**
 * leet - encodes a string into 1337
 * @s: pointer to string
 * Return: returns s
 */

char *leet(char *s)
{
	char upper[] = {"AEOTL"};
	char low[] = {"aeotl"};
	char ch[] = {"43071"};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == low[j])
			{
				s[i] = ch[j];
				break;
			}
		}
	}
	return (s);
}
