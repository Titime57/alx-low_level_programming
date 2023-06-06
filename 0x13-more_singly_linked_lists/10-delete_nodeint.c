#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first elemnts in the list
 * @index: index of the node to delete
 * Return: 1 if it true, -1 if it is not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *new = NULL;
	unsigned int l = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (l < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		l++;
	}
	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}