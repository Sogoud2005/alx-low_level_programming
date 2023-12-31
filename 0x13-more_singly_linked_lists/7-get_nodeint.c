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
	unsigned int i = 0;
	listint_t *node = head;

	if (!head)
		return (NULL);

	if (!index)
		return (NULL);

	while (node)
	{
		if (i == index)
			return (node);

		if (!node->next)
			break;

		node = node->next;
		i++;
	}
	return (NULL);
}
