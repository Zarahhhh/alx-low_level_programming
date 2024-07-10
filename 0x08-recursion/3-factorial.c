#include "main.h"

/**
	* factorial - Computes the factorial of a given number.
	* @n: The number to compute the factorial of.
	*
	* Return: The factorial of n.
	* If n is less than 0, return -1 to indicate an error.
	*         Factorial of 0 is 1.
	*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
