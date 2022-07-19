#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - printes all the elements of list_c
* @h: head of list
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
