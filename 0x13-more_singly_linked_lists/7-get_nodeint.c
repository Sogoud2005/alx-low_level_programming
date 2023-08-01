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
		for (; i < index; i++)
		{
			head = head->next;
			if (i == index - 1)
			{
				return (head);
			}
			if (!head->next && i < index - 1)
				return (NULL);
		}
	}
	return (NULL);
}
