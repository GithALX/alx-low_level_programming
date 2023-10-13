#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (base = 1; base <= base; base++)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
