#include "main.h"

/**
 * more_numbers - prints ints from 0 to 14 *10
 * return: 0
 */

void more_numbers(void)
{
	int FD, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			FD = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				FD = count % 10;
			}
			_putchar('\n');
		}
	}
}
