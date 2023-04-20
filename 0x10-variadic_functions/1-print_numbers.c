#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list print;

	va_start(print, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", va_arg(print, int));
		else
			printf("%d", va_arg(print, int));
	}
	printf("\n");
	va_end(print);
}
