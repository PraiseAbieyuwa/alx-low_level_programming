#include "lists.h"

/**
 * free_list - frees the created list
 * @head: head of list.
 * Return:nothin.
 */

void free_list(list_t *head)
{
	list_t *tempAlt;

	while ((tempAlt = head) != NULL)
	{
		head = head->next;
		free(tempAlt->str);
		free(tempAlt);
	}
}
