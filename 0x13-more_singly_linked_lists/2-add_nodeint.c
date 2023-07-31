#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint - adds a node at the start
 * @head: pointer to the list
 * @n: int to insert
 * Return: address or null
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
