#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: (result) on success / NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	result = malloc(strlen(s1) + strlen(s2) + 1);
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
