#include "lists.h"

/**
 * reverse_listint - function that reverse the element in a linked list
 * @head: function that points to the first node
 * Return: return pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_Node = NULL, *curre_node, *next = NULL;

	curre_node = *head;

	for (; curre_node != NULL;)
	{
	next = curre_node->next;
	curre_node->next = prev_Node;
	prev_Node = curre_node;
	curre_node = next;
	}

	*head = prev_Node;
	return (*head);
}
