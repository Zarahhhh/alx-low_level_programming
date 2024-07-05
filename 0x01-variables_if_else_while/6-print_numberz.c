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
		putchar(num + '0'); /* Convert integer to corresponding character */
	}
	
	putchar('\n'); /* Print new line */
	
	return (0);
}
