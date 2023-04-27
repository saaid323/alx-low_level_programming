#include<stdio.h>

/**
 * print - Apply the constructor attribute to myStartupFun() so that it is
 * executed before main()
 */
void print(void) __attribute__ ((constructor));

/**
 * print - implementation of print
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
