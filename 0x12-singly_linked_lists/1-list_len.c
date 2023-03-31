#include "lists.h"

/**
 * list_len - prints length of list_t linked list
 * @h: linked list
 * Return: number of nodes/elements (length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		t++;
		h = h->next;
	}

	return (t);
}
