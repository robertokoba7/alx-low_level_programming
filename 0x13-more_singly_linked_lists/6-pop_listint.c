#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * linked list.
 * @head: head of the list.
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *node2;

	if (*head == NULL)
		return (0);

	node2 = *head;

	head_node = node2->n;

	h = node2->next;

	free(node2);

	*head = h;

	return (head_node);
}
