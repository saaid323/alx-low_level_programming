/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string
 * Return: returns encoded string
 */

char *rot13(char *s)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char o[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == in[j])
			{
				s[i] = o[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
