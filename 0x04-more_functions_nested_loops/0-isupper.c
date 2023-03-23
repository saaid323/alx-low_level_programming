#include "main.h"
#include <ctype.h>
/**
 * _isupper -  checks for uppercase character
 * @c: integer argument
 * Return: 1 if c is upper case
 */


int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
