#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: the list struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes += 1;
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
	}
	return (nodes);
}
