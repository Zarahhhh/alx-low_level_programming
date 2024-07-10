#include "main.h"

/**
	* _strlen_recursion - Returns the length of a string.
	* @s: The string to find the length of.
	*
	* Description: This function computes the length of a string recursively.
	* It increments the length count for each character until it reaches the
	* terminating null byte ('\0').
	*
	* Return: The length of the string.
	*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

