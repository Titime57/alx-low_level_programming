#include "lists.h"
size_t looped_listint_count(const listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * looped_listint_count - counts the number of unique nodes
 * @head: a pointer to the head of the listint_t to check
 * Return: the number of unique nodes in the list, otherwise 0
 */
size_t looped_listint_count(const listint_t *head)
{
	const listint_t *top, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	top = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (top == h)
		{
			top = head;
			while (top != h)
			{
				nodes++;
				top = top->next;
				h = h->next;
			}
			top = top->next;
			while (top != h)
			{
				nodes++;
				top = top->next;
			}
			return (nodes);
		}
		top = top->next;
		h = (h->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - frees a linked list
 * @h: pointer of the adress of the head of the linked list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes, i;
	listint_t *new;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
