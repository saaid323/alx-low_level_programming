#include <stdio.h>
/**
 * op_add - adds two number
 * @a: first number
 * @b:second number
 * Return: returns addition of a and b
 */
int op_add(int a, int b) { return (a + b); }
/**
 * op_sub - subtracts two number
 * @a: first number
 * @b:second number
 * Return: returns subtractionof a and b
 */
int op_sub(int a, int b) { return (a - b); }
/**
 * op_mul - multiplies two number
 * @a: first number
 * @b:second number
 * Return: returns product of a and b
 */
int op_mul(int a, int b) { return (a * b); }
/**
 * op_div - divides two number
 * @a: first number
 * @b:second number
 * Return: returns division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b); }
/**
 * op_mod - module two number
 * @a: first number
 * @b:second number
 * Return: returns remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b); }
