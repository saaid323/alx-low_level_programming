#include<stdio.h>

/**
 * print - This function is assigned to execute before main
 */
void print(void) __attribute__ ((constructor));

/**
 * print - prints
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
