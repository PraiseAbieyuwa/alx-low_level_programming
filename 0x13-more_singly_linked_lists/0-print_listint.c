#include "lists.h"

/**
 * print_listint - prints all the element in the linked list
 * @h: list
 * Return: number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	int numb_node = 0;

	for (; h != NULL; numb_node++)
	{
	printf("%d\n", h->n);

	h = h->next;
	}
	return (numb_node);
}
