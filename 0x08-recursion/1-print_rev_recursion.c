#include "main.h"

/**
	* _print_rev_recursion - Prints a string in reverse.
	* @s: The string to be printed in reverse.
	*
	* Description: This function prints a string in reverse using recursion.
	* It first moves to the end of the string recursively and then prints
	* characters from the end towards the beginning.
	*
	* Return: Nothing.
	*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
