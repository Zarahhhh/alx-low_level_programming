#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;
	int letter;

	/* Print the numbers 0 to 9 */
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	/* Print the letters a to f */
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n'); /* Print new line */

	return (0);
}
