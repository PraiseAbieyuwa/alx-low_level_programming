#include "lists.h"

/**
 * pop_listint - function that delete the head node
 * @head: pointer to the first node
 * Return: return the new node
 */

int pop_listint(listint_t **head)
{
	size_t temporary;
	listint_t *currentNode, *prevNode;

	if (*head == NULL)
		return (0);

	currentNode = *head;
	prevNode = currentNode->next;
	temporary = currentNode->n;
	free(currentNode);
	*head = prevNode;
	return (temporary);
}
