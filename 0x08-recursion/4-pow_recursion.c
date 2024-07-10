#include "main.h"

/**
	* _pow_recursion - Computes the power of a number recursively.
	* @x: The base number.
	* @y: The exponent.
	*
	* Return: The value of x raised to the power of y.
	*         If y is lower than 0, return -1.
	*         If y is 0, return 1 (base case).
	*/
int _pow_recursion(int x, int y)
{
	/* If y is negative, return -1 (error case) */
	if (y < 0)
	return (-1);

	/* Base case: x^0 = 1 */
	if (y == 0)
	return (1);

	/* Recursive case: x^y = x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}

