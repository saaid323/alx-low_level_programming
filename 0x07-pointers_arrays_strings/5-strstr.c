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
	int size_hay = strlen(haystack);
	int size_needle = strlen(needle);

	for (i = 0; i <=  size_hay; i++)
	{
		for (j = 0; j <= size_needle; j++)
		{
			if (haystack[i] != needle[j])
			{
				break;
			}
			else
			{
				if (haystack[i] == needle[j])
				{
					return (&haystack[i]);
				}
			}
		}
	}
	return ('\0');
}
