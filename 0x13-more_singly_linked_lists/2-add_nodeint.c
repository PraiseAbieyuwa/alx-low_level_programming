#include "lists.h"

/**
 * *add_nodeint -at node at the beginning of the linked list
 * @head:  pointer to the first node
 * @n: number of element
 * Return: return number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addsNodes;

	addsNodes = malloc(sizeof(listint_t));

	if (addsNodes == NULL)
		return (NULL);

	addsNodes->n = n;
	addsNodes->next = *head;
	*head = addsNodes;

	return (*head);
}
