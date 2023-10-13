#include "lists.h"

/**
 * print_dlistint - this prints all the elements of a
 * dlistint_t list
 * @h: this is the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int ount;

	ount = 0;

	if (h == NULL)
		return (ount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ount++;
		h = h->next;
	}

	return (ount);
}
