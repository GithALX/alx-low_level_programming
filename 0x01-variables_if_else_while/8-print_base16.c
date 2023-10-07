#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 *
 * description: prints all the numbers of base 16 in lowercase
 *
 * return: 0 (success)
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
