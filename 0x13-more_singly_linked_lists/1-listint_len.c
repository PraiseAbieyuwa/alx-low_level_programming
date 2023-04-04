#include "lists.h"

/**
 * listint_len - print out the number of elements in the linked list
 * @h: list
 * Return: return number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numberLen;

	numberLen = 0;

	for (; h != NULL; numberLen++)
		h = h->next;

	return (numberLen);
}
