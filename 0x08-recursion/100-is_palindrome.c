#include <string.h>

/**
 * palindrome - return 1 if s is palindrome or 0 if it is noti
 * @s: pointer to string
 * @low: start of string
 * @high: end of string
 * Return: return 1 if s is palindrome or 0 if it is not
 */

int palindrome(char *s, int low, int high)
{
	if (low >= high)
		return (1);
	if (s[low] == s[high])
		return (palindrome(s, low + 1, high - 1));
	else
		return (0);

}

/**
 * is_palindrome - return 1 if s is palindrome or 0 if it is not
 * @s: pointer to string
 * Return: return 1 if s is palindrome or 0 if it is not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome(s, 0, len - 1));
}
