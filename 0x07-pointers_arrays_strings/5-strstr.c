#include <string.h>
/**
 * _strstr- locates a substring
 * @haystack: string to be scanned
 * @needle: string to be searched with-in haystack string
 * Return:  pointer to haystack
 */

char *_strstr(char *haystack, char *needle)
{
	return strstr(haystack, needle);
}
