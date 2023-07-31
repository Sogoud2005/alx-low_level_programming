#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: a pointer
 * Return: none
*/
void free_listint(listint_t *head)
{
	listint_t *free_n;

	while (head)
	{
		free_n = head;
		head = head->next;
		free(free_n);
	}
}
