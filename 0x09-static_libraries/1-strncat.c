#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - Concatenates up to `n` characters
 * from the string pointed to by `src`
 * to the end of the string pointed to by `dest`.
 * @dest: The destination string.
 * @src: The source string to concatenate.
 * @n: The maximum number of characters to concatenate.
 * Return: A pointer to the resulting string `dest`.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
