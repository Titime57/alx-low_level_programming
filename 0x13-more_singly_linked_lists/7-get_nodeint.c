#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in  linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we are looking for, NULL if is not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *new = head;

	while (new && l < index)
	{
		new = new->next;
		l++;
	}
	return (new ? new : NULL);
}
