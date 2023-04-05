#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete the nide at index
 * @index: the point to delete new node
 * @head: pointer to the first node in the linked list
 * Return: return i if it succeds and -1 if its fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *oldNode, *newNode;
	size_t i;

	oldNode = *head;
	
	if (index != 0)
	{
		for (i = 0; i < index - 1 && oldNode != NULL; i++)
		{
			oldNode = oldNode->next;
		}
	}
	if (oldNode == NULL || (oldNode->next == NULL && index != 0))
	{
		return (-1);
	}
	newNode = oldNode->next;
	if (index != 0)
	{
		oldNode->next = newNode->next;
		free(newNode);
	}
	else
	{
		free(oldNode);
		*head = newNode;
	}
	return (1);
}

