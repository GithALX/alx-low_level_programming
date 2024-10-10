#include "main.h"

/**
 * are_digits - checks if the string is composed  of digits only
 * @str: string to check
 * Return: 0 in success, 1 in failure
*/

int are_digits(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (1);
	}
	return (0);
}

/**
 * main - program that multiplies two positive numbers.
 * @ac: argument count
 * @av: argument value
 * Return: 0 in success, 98 in error
*/

int main(int ac, char **av)
{
	char *num1 = *(av + 1), *num2 = *(av + 2);
	int len1 = strlen(num1), len2 = strlen(num2), n1 = are_digits(*(av + 1)),
	    n2 = are_digits(*(av + 1)), *result, sum = 0, mul = 0, i = 0, j = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (n1 == 1 || n2 == 1)
	{
		printf("Error\n");
		exit(98);
	}
	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;/*store the ones place*/
			result[i + j] += sum / 10;/*carries the tens place*/
		}
	}
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;
	if (i == len1 + len2)
		printf("0\n");
	for (; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");
	free(result);
	return (0);
}
