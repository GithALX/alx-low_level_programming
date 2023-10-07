#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print 0,1, 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit1 <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar('.');
			putchar(' ');
		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
