#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"world", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	printf("before head\n");
	printf("head-> %p\n", (void *) head);
	printf("before new\n");
	printf("new-> %p\n", (void *) new);
	head = new;
	n = list_len(head);
	printf("-> %lu elements\n", n);
	free(new->str);
	free(new);
	return (0);
}
