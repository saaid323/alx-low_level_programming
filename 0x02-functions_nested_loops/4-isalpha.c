#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character.
 * @c: int parameter
 * Return - 0 Always
 */


int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);

}
