#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the node on the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
