#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - Fills the first `n` bytes of the memory
 * area pointed to by `s`
 * with the constant byte `b`.
 * @s: The memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the memory area `s`.
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
