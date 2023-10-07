#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints from a to z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*prints from A to Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
