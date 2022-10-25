#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to the pointer of the current node on the list
 * @n: int value to be added at current node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tempNode = malloc(sizeof(listint_t));

	if (tempNode == NULL)
		return (NULL);

	tempNode->n = n;
	tempNode->next = *head;
	*head = tempNode;
	return (tempNode);
}
