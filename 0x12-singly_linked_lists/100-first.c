#include <stdio.h>

/**
 * print - apply attribute constructor to print before main
 * is executed
 */

void print(void)__attribute__ ((constructor));

/**
 * print - prints
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
