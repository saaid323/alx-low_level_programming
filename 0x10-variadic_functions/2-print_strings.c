#include <stdio.h>
#include "stdarg.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("nul");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
