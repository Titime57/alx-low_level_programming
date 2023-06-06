#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer ro the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL;
	listint_t *temp = NULL;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = temp;
	}
	*head = new;
	return (*head);
}
