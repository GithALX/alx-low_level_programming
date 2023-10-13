#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *
 * @n: number of times the character \
 * should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int loctn, space;

		for (loctn = 1; loctn <= n; loctn++)
		{
			for (space = 1; space <= loctn; space++)
				_putchar(' ');
			_putchar(92); /*the character '/' in ASCII*/
			_putchar('\n');
		}
	}
}
