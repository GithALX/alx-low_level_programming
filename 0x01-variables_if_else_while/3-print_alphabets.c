#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 *
 * description: print the alphabet in lower case then in uppercase
 *
 * return: 0 (success)
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
