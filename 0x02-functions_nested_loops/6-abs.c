#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the integer whose absolute value is to be computed
 * Return: the absolute value of the integer
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}