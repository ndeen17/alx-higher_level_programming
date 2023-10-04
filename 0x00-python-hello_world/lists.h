#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - this is a singly list
 * Description: singly linked list
 * for Holberton project
 */
typedef struct listint_s
{
	int p;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int p);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
