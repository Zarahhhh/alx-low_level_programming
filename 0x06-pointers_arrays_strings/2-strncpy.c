#include "main.h"

/**
 * _strncpy - copies at most n bytes of the src string to the dest string
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to be copied from src
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
