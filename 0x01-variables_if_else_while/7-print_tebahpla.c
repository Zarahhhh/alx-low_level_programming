#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int letter;

	/* Print the lowercase alphabet in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n'); /* Print new line */

	return (0);
}
