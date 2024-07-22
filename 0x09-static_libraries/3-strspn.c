#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The initial segment of the string.
 * @accept: The bytes to include in the prefix substring.
 * Return: The number of bytes in the initial
 * segment of `s` which consist
 * only of bytes from `accept`.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
