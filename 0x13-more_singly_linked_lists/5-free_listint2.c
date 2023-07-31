#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer
 * Return: none
*/
void free_listint2(listint_t **head)
{
	listint_t *free_n, *temp;

	if (!head)
		return;

	free_n = *head;

	while (free_n)
	{
		temp = free_n;
		free_n = free_n->next;
		free(temp);
	}
	*head = NULL;
}
