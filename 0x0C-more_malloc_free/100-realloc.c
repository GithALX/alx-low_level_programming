#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated
 *	 with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr(o)
 * @new_size: the new size, in bytes of the new memory block(n)
 * Return: a pointer to the new block, (ptr) in case n == o,
 *	   NULL if n =0 && ptr!= NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int o = old_size, n = new_size, copy_size = 0;
	char *new_res;

	if (n == o)
		return (ptr);
	if (n == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		char *res;

		res = malloc(n);
		if (res == NULL)
			return (NULL);
		return (res);
	}
	new_res = malloc(n);
	if (new_res == NULL)
		return (NULL);

	copy_size = (o < n) ? o : n;
	memcpy(new_res, ptr, copy_size);
	free(ptr);

	return (new_res);
}
