#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strlen - calculates string len
 * @s: the string
 * Return: strlen
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * *add_node_end - adds a node at the end
 * @head: the head
 * @str: the string to add
 * Return: a pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new == NULL || str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen((char *)str);
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
