#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the link list
 * @head: pointer to the first node in the list
 * @n: number of elements
 * Return: return the address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *currentNode, *prevNode;

	currentNode = malloc(sizeof(listint_t));

	if (currentNode == NULL)
	{
		return (NULL);
	}
	currentNode->n = n;
	currentNode->next = NULL;

	prevNode = *head;

	if (*head == NULL)
	{
		*head = currentNode;
	} else
	{
		while (prevNode->next != NULL)
		{
			prevNode = prevNode->next;
		}
		prevNode->next = currentNode;
	}
	return (*head);
}
