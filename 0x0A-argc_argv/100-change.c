/**
* num_coins - returns the number of coins to make change for n.
* @n: amount of money to give back.
*
* Return: (count).
*/

#include <stdio.h>
#include <stdlib.h>

int num_coins(int n)
{
	int count = 0;

	if (n == 0)
		return (0);
	while (n >= 25)
	{
		count++;
		n -= 25;
	}
	while (n >= 10)
	{
		count++;
		n -= 10;
	}
	while (n >= 5)
	{
		count++;
		n -= 5;
	}
	while (n >= 2)
	{
		count++;
		n -= 2;
	}
	while (n >= 1)
	{
		count++;
		n -= 1;
	}
	return (count);
}
/**
* main - prints the minimum number of coins to make change.
* @ac: argument count.
* @av: argument value.
*
* Return: 0 if success / 1 if error.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents;

		cents = atoi(*(av + 1));
		if (cents < 0)
			printf("0\n");
		else
		{
			printf("%d\n", num_coins(cents));
		}
	}
	return (0);
}
