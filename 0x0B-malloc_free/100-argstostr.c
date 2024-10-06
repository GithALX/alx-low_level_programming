#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument value.
 *
 * Return: a pointer to a new string, or NULL if it fails.
*/

char *argstostr(int ac, char **av)
{
	char *result, *p, *arg;
	int i, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total_len += strlen(*(av + i)) + 1;

	result = malloc(total_len + 1);
	if (result == NULL)
		return (NULL);

	p = result;
	for (i = 0; i < ac; i++)
	{
		arg = *(av + i);
		while (*arg != '\0')
			*p++ = *arg++;
		*p++ = '\n';
	}
	*p = '\0';

	return (result);
}
