#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - this is to print all elements of a listint_t list
 * @h: this is a pointer to head of list
 * Return: this are number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int o;

    current = h;
    o = 0;
    while (current != NULL)
    {
	printf("%i\n", current->o);
	current = current->next;
	o++;
    }

    return (o);
}

/**
 * add_nodeint_end - this helps to add a new node at the end of a listint_t list
 * @head: this is a pointer to pointer of first node of listint_t list
 * @n: this is an integer to be included in new node
 * Return: this address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
	return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
	*head = new;
    else
    {
	while (current->next != NULL)
	    current = current->next;
	current->next = new;
    }

    return (new);
}

/**
 * free_listint - this frees a listint_t list
 * @head: shows a pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
	current = head;
	head = head->next;
	free(current);
    }
}
