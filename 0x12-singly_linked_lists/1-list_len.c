#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - determines lenght of linked list
 * @h: a Linked list
 *
 * Return: size of a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
