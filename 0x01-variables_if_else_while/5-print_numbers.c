#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number; /* Declare variable for the number */

	/* Loop through numbers from 0 to 9 */
	for (number = 0; number < 10; number++)
	{
		/* Print the current number */
		putchar(number + '0');
	}

	/* Print a newline character for readability */
	putchar('\n');

	return (0);
}


