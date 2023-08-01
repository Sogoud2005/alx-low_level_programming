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

	if (!head)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		
		head = head->next;
		
		if (!head->next && i < index - 1)
			return (NULL);
		i++;
	}
	return (NULL);
}
