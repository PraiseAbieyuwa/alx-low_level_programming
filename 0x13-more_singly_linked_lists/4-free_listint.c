#include "lists.h"

/**
 * free_listint - frees the element in the linked list
 * @head: pointer to the first node
 * Return: return the free space
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
