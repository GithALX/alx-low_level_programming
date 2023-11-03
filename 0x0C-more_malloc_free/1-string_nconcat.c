#include "main.h"

/**
* string_nconcat - a function that concatenates two strings.
*
* @s1: pointer to first string.
* @s2: pointer secound string.
* @n: number of bytes from n2 to concatenate.
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, s1_length, s2_length;

	/*Check if the strings passed are null */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Compute the length of the strings */
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	/*Memory reservation for case 1&2*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*Copy the first string into str*/
	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	/*Copy the second string into str*/
	for (b = 0; b < n ; b++)
	{
		str[a] = s2[b];
		a++;
	}

	str[a] = '\0';
	return (str);
}
