#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - returns a node
 * @head: head pointer
 * @index: index
 * Return: nth node or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;

		if (!head->next && i < index - 1)
			return (NULL);
	}
	return (head);
}
