#include "lists.h"
/**
 * add_node - includes a nod to the beginning of the
 * list_t list.
 * @head: beininging of the list.
 * @str: stringt.
 * Return: success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *headOfNod;
	size_t maxI;

	headOfNod = malloc(sizeof(list_t));
	if (headOfNod == NULL)
		return (NULL);

	headOfNod->str = strdup(str);

	for (maxI = 0; str[maxI]; maxI++)
		;

	headOfNod->len = maxI;
	headOfNod->next = *head;
	*head = headOfNod;

	return (*head);
}
