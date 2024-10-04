#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: (dest).
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *dest = malloc(strlen(str) + 1);
	char *p_str = str;
	char *p_dest = dest;

	if (dest == NULL)
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
