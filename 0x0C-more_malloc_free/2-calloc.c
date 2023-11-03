#include "main.h"

/**
 * _calloc - allocates memory for an array, initialized to 0
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: pointer to allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	/* Check if either nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory */
	p = malloc(nmemb * size);

	/* Check if allocation succeeded */
	if (p == NULL)
		return (NULL);

	/* Initialize memory to 0 */
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}

