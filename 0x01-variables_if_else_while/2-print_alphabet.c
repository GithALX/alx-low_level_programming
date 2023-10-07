#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 *
 * description: print all the alphabet letters in lowercase
 *
 * return: 0 (success)
*/
/* we're gonna print the alphabets in lowercase */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
