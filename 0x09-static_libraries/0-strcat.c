#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string, where the resulting
 * concatenated string is stored.
 * @src: The source string, which is appended to the destination string.
 *
 * Return: A pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
