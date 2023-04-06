#include "lists.h"

/**
 * free_list - function that frees the list
 * @head: points to the first node
 */
void free_list(list_t *head)
{
	list_t *tempNodes;

	while (head != NULL)
	{
		tempNodes = head;
		head = head->next;
		free(tempNodes->str);
		free(tempNodes);
	}
}
