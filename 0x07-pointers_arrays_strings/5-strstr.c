#include <string.h>
/**
 * _strstr- locates a substring
 * @haystack: string to be scanned
 * @needle: string to be searched with-in haystack string
 * Return:  pointer to haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] !=  '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				break;
			}
			else
			{
				if (haystack[i + 1] == needle[j + 1])
				{
					return (&haystack[i]);
				}
			}
		}
	}
	return (0);
}
