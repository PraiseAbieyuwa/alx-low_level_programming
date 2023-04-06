#include "lists.h"

/**
 * add_node_end - function that add node at the end of the list
 * @str:string
 * @head:pointer to the first nodes
 * @lengthO: length of elements
 * Return:return head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *currNodes, *prevNode;
	unsigned int lengthO = 0;

	for (lengthO = 0; str[lengthO] != '\0'; lengthO++)
		;

	prevNode = malloc(sizeof(list_t));

	if (prevNode == NULL)
		return (NULL);

	prevNode->str = strdup(str);
	prevNode->next = NULL;
	prevNode->len = lengthO;
	currNodes = *head;
if (currNodes == NULL)
{
	*head = prevNode;
} else
{
	while (currNodes->next != NULL)
	{
		currNodes = currNodes->next;
	}
	currNodes->next = prevNode;
}

return (*head);
}
