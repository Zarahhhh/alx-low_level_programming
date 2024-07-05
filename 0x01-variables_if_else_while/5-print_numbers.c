#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;

	/* Print all single digit numbers of base 10 starting from 0 */
	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	/* Print new line */
	printf("\n");

	return (0);
}
