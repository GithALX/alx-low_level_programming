#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_bit = n ^ m;
	unsigned int count = 0;

	while (flip_bit)
	{
		if (flip_bit & 1ul)
			count++
		flip_bit = flip_bit >> 1;
	}
	return (count);
}
