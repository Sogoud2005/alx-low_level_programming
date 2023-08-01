#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *reverse_listint - reverses a list
 * @head: head
 * Return: address
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!head || !*head)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
