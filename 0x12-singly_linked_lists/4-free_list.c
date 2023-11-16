#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *current;

	while (current = head)
	{
		head =head->next;
		free(current->str);
		free(current);
	}
}
