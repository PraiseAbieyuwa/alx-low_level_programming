#include "lists.h"
/**
 * list_len - number of members a linked list has
 * @h: linked
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t maXim;

	maXim = 0;
	for (maXim = 0; h != NULL; maXim++)
	{
		h = h->next;
	};
	return (maXim);
}
