#include "lists.h"

/**
 * list_len - Gives the number of elements in a linked list_t list
 * @h: head of linked list
 * Description: gives the size of a linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
