#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - entry point
 *
 * Description : positive or negative input
 *
 * Return : Always 0 on success
*/

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%i is positive\n", n);
		else if (n == 0)
			printf("%i is zero\n", n);
		else
			printf("%i is negative\n", n);
		/* this is the end*/
		return (0);
}
