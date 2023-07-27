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

	while(*s++)
		len++;
	return (len);
}
/**
 * *add_node - adds a node at the start of a list
 * @head: the new head
 * @str: input string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL || str == NULL)
		return (NULL);

	temp->str = (char *)str;
	temp->str = strdup(str);
	temp->len = _strlen((char *)str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
