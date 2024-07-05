#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char letter;

	/* Print lowercase alphabet excluding 'q' and 'e' */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
