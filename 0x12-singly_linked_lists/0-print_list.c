#include "lists.h"
#include <stdio.h>
/**
 * print_list - show all the elements of a list_t list
 * @h: singly list
 * Return: number
 */
size_t print_list(const list_t *h)
{
	size_t lengT;

	lengT = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		lengT++;
	};
	return (lengT);
}
