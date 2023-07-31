#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint_end - adds a node at the end
 * @head: pointer
 * @n: the element
 * Return: address or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);

}
