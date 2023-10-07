#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 *
 * description: compares a number to 5,6 and 0
 *
 * return: 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/* converting digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
