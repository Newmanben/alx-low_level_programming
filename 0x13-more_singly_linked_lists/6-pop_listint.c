#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - Deletethe first element of a single linked list.
 * @head: pointer to a list.
 * Return: Integer if success.
 *
 */

int pop_listint(listint_t **head);
{
	listint_t *tp;
	int my_date;

	if (*head == NULL)
		return (0);
	tp = *head;
	*head = tp->next;
	my_date = tp->n;
	free(tp);
	return (my_date);
}
