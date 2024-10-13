#include "main.h"

/**
 * are_digits - checks if the string is composed  of digits only
 * @str: string to check
 * Return: 0 in success, 1 in failure
*/

int are_digits(char *str)
{
	if (str == NULL)
		return (1);
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
* validate_arguments - checks for correct argument count and validity.
* @ac: argument count.
* @av: argument values.
* Return: 0 if valid, 1 if invalid.
*/

int validate_arguments(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (are_digits(*(av + 1)) || are_digits(*(av + 2)))
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
* multiply_numbers - performs multiplication of two numbers
* @num1: first number.
* @num2: second number.
* return: void.
*/

void multiply_numbers(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int *result, sum = 0, mul = 0, i = 0, j = 0;

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
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;
	if (*num1 == '0' || *num2 == '0')
		printf("0\n");
	else
	{
		for (; i < len1 + len2; i++)
			printf("%d", result[i]);
		printf("\n");
	}
	free(result);
}

/**
 * main - program that multiplies two positive numbers.
 * @ac: argument count
 * @av: argument value
 * Return: 0 in success, 98 in error
*/

int main(int ac, char **av)
{
	int check = validate_arguments(ac, av);

	if (check == 1)
		exit(98);
	else
		multiply_numbers(*(av + 1), *(av + 2));
	return (0);
}
