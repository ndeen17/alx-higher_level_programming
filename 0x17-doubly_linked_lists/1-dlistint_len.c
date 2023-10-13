#include "lists.h"

/**
 * dlistint_len - this returns the number of elements in
 * a double linked list
 * @h: this is the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int ount;

	ount = 0;

	if (h == NULL)
		return (ount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		ount++;
		h = h->next;
	}

	return (ount);
}
