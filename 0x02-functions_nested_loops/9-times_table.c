#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, multpl, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (multpl = 1; multpl <= 9; multpl++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multpl;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /* this gets the first digit */
			_putchar((prod % 10) + 48); /* this gets the second digit */
		}
		_putchar('\n');
	}
}
