#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * free_list - frees a list
 * @head: the head list
 * Return: none
*/
void free_list(list_t *head)
{
	list_t *free_nodes;

	while (head)
	{
		free_nodes = head->next;
		free(head->str);
		free(head);
		head = free_nodes;
	}
}
