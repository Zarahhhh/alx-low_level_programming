#include <stdio.h>
#include <stdlib.h>

/**
 * my_rand - function to override random number generation
 * Return: always returns 9, representing the first winning number
 */

int my_rand(void)

{
	return (9);
}

/**
 * setup - function to execute upon loading the shared library
 * This function can be used for any initialization, if needed.
 */

void __attribute__((constructor)) setup(void)

{
	printf("Winning numbers will be forced.\n");
}
