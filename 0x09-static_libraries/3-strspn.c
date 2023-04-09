
/**
 * _strspn - get length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the list of characters to match in s
 * Return:  number of characters in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int total = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[j] == ' ')
			{
				break;
			}
			else
			{
				if (s[j] == accept[i])
				{
					total += 1;
				}
			}
		}
	}
	return (total);
}
