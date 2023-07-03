#include "lists.h"

/**
 * add_node_end - node at the extreme
 * of a list_t list.
 * @head: head list.
 * @str: string list.
 * Return: success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tempAlt;
	size_t lax;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (lax = 0; str[lax]; lax++)
		;

	newNode->len = lax;
	newNode->next = NULL;
	tempAlt = *head;

	if (tempAlt == NULL)
	{
		*head =         newNode;
	}
	else
	{
		while (tempAlt->next != NULL)
			tempAlt = tempAlt->next;
		tempAlt->next = newNode;
	}

	return (*head);
}
