#include "lists.h"

/**
 * get_nodeint_at_index - function that return the node at the index
 * @head: pointer to the first node in the linked list
 * @index: the element at the nth node
 * Return: return success or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (i = 0; ((i < index) && head != NULL); i++)
		head = head->next;

	if (i == index)
		return (head);

	return (NULL);
}
