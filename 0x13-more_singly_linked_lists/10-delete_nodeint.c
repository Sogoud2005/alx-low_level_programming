#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: head pointer
 * @index: index
 * Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;

	while (temp)
	{
		if (i == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		prev = temp;
		temp = temp->next;
	}
	return (-1);
}
