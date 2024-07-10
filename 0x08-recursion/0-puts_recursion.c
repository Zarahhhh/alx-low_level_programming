#include "main.h"

/**
	* _puts_recursion - Prints a string, followed by a new line.
	* @s: The string to be printed.
	*
	* Description: This function prints a string using recursion.
	* Each call to _puts_recursion prints one character and calls
	* itself with the next character in the string until it reaches
	* the end of the string, at which point it prints a new line.
	*
	* Return: Nothing.
	*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}

