#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add -add two numbers.
 * @a:the first number.
 * @b:the second number.
 * Return:the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -subtrate a and b
 * @a:the first number.
 * @b:the second number.
 * Return:Subtration of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -the product of two numbers.
 * @a:the first number.
 * @b:the second number.
 * Return:the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -the divide two numbers.
 * @a:the first number.
 * @b:the second number.
 * Return:quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -the remainder of the division of two numbers.
 * @a:the first number.
 * @b:the second number.
 * Return:remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
