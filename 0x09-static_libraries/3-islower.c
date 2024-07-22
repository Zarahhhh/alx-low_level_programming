#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c) /* _islower - Checks if a character is lowercase.*/
{
	return (c >= 'a' && c <= 'z');
}
