#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: (dest).
 */

char *_strdup(char *str)
{
	char *dest = malloc(strlen(str) + 1);
	char *p_str = str;
	char *p_dest = dest;

	if (str == NULL || dest == NULL)
		return (NULL);

	while (*p_str)
	{
		*p_dest = *p_str;
		p_str++;
		p_dest++;
	}
	p_dest = '\0';
	return (dest);
}
