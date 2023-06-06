#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the number of unique nodes
 * @head: a pointer to the head of the listint_t to check
 * Return: the number of unique nodes in the list, otherwise 0
 */
size_t looped_listint_len(const listint_t *head)
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
 * print_listint_safe - prints a listint_t list safely
 * @head: a pointer to the head of the listint_t list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p} %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
