#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 48;/*48; is the decimal representation of 0*/

	while (digit <= 102) /* 102; is the decimal representation of f*/
	{
		putchar(digit);
		/* after 9 we jump till 96;*/
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
