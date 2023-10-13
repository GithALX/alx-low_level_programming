#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: the number of time chr _
 * should be printed
 */

void print_line(int n)
{
	int linechr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (linechr = 1; linechr <= n; linechr++)
			_putchar('_');
		_putchar('\n');
	}
}
