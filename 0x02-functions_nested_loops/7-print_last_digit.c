#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int LastDigit;

	if (n < 0)
		LastDigit = -1 * (n % 10);
	else
		LastDigit = n % 10;
	_putchar(LastDigit + 48);
	return (LastDigit);
}
