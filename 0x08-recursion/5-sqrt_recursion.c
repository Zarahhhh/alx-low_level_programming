#include "main.h"

/**
	* _sqrt_recursion - Returns the natural square root of a number.
	* @n: The number to find the square root of.
	*
	* Return: The natural square root of n,
	* -1 if n does not have a natural square root.
	*/
int _sqrt_recursion(int n)
{
	/* Negative numbers don't have a natural square root */
	if (n < 0)
	return (-1);

	/* Base cases: square root of 0 or 1 is itself */
	if (n == 0 || n == 1)
	return (n);

	/* Call helper function with initial guess as 1 */
	return (helper(n, 1));
}

/**
	* helper - A helper function to recursively find the square root.
	* @n: The number to find the square root of.
	* @guess: The current guess for the square root.
	*
	* Return: The natural square root of n,
	* -1 if n does not have a natural square root.
	*/
int helper(int n, int guess)
{
	/* Base case: found the square root */
	if (guess * guess == n)
	return (guess);

	/* If the square of guess exceeds n, no natural square root */
	if (guess * guess > n)
	return (-1);

	/* Recursive call with incremented guess */
	return (helper(n, guess + 1));
}

