#include "lists.h"
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
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int diff;
	listint_t *new;

	if (*h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
