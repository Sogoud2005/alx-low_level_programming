#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_loop - searches for loops
 * @head: head
 * Return: pointer or NULL
*/
listint_t *find_loop(listint_t *head)
{
	listint_t *end, *ptr;
	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a list
 * @h: head
 * Return: size
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size;
	int loop = 1;
	listint_t *next, *loopn;

	if (h == NULL || *h == NULL)
		return (0);

	loopn = find_loop(*h);
	for (size = 0; (*h != loopn || loop) && *h != NULL; *h = next)
	{
		size++;
		next = (*h)->next;
		if (*h == loopn && loop)
		{
			if (loopn == loopn->next)
			{
				free(*h);
				break;
			}
			size++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (size);
}
