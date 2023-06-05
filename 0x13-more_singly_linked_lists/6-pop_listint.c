#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first elements in the linked list
 * Return: data inside the elements that was deleted or 0 if it is not
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int numb;

	if (!head || !*head)
		return (0);
	numb = (*head)->n;
	new = (*head)->next;
	*head = new;
	return (numb);
}
