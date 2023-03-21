#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character.
 * @c: int parameter
 */


int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);

}
