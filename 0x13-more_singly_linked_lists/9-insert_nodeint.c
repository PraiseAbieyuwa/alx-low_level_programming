#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert new node at given position
 * @head: pointer to the first node in the list
 * @n:number of element
 * @idx: index to insert the new node
 * Return: return NULL if fail else return address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nextNode1, *newNode3;
	size_t j = 0;

	nextNode1 = *head;

	if (idx != 0)
	{
		for (j = 0; j < idx - 1 && nextNode1 != NULL; j++)
		{
			nextNode1 = nextNode1->next;
		}
	}

	if (nextNode1 == NULL && idx != 0)
	{
		return (NULL);
	}
	currNode2 = malloc(sizeof(listint_t));
	if (currNode2 == NULL)
		return (NULL);
	newNode3->n = n;

	if (idx == 0)
	{
		newNode3->next = *head;
		*head = newNode3;
	} else
	{
		newNode3->next = nextNode->next;
		nextNode->next = newNode3;
	}

	return (newNode3);
}
