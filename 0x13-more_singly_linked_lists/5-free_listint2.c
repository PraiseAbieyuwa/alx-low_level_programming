#include "lists.h"

/**
 * free_listint2 - frees the element in the linked list
 * @head: pointer to the first node
 * Return: return the free space
 */

void free_listint2(listint_t **head)
{
	listint_t *current1, *temporary2;

	if (head != NULL)
	{
	current1 = *head;

	while (current1 != NULL)
	{
		temporary2 = current1;
		current1 = current1->next;
		free(temporary2);
	}
	*head = NULL;
	}

}
