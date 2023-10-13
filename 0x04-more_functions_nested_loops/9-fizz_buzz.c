#include "main.h"

/**
 * main - prints the numbers 1-100 followed by a new line
 * But for multiples of 3 print Fizz instead of the number
 * and for the multiples of 5 print Buzz
 * For numbers which are multiples of both 3 and 5 print FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
