#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: (dest).
 */

char *_strdup(char *str)
{
	char *dest;
	char *p_str = str;
	char *p_dest;

	if (str == NULL)
		return (NULL);

	dest = malloc(strlen(str) + 1);
	if (dest == NULL)
		return (NULL);

	p_dest = dest;
	while (*p_str)
	{
		*p_dest = *p_str;
		p_str++;
		p_dest++;
	}
	p_dest = '\0';
	return (dest);
}
