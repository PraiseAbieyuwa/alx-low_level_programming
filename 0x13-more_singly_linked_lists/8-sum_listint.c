#include "lists.h"

/**
 * sum_listint - function that return the sum of all data
 * @head: pointer to the first node in the list
 * Return: return 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	size_t sumData = 0;

	while (head != NULL)
	{
		sumData = sumData + head->n;
		head = head->next;
	}
	return (sumData);
}

