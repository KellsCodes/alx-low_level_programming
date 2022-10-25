#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: link node
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
