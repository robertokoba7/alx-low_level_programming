#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *node2;

	if (head != NULL)
	{
		node2 = *head;
		while ((temp = node2) != NULL)
		{
			node2 = node2->next;
			free(temp);
		}
		*head = NULL;
	}
}
