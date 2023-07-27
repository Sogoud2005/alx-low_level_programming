#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - prints the length of the list
 * @h: the list
 * Return: the length of the list
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h)
	{
		if (h->str && h->len && h->next)
			i = 3;
		if (!h->str && !h->len && !h->next)
			i = 0;
		if ((h->str && h->len) || (h->str && h->next) || (h->len && h->next))
			i = 2;
		if ((!h->str && !h->len) || (!h->str && !h->next) || (!h->len && !h->next))
			i = 1;
	}
	return (i);
}
