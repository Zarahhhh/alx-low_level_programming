#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string dest.
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
