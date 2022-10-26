#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer of the current node on the list
 * @n: int value to be added at the end node
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		listint_t tempNode = *head;

		while (tempNode)
		{
			if (tempNode->next == NULL)
			{
				tempNode->next = newNode;
				break;
			}
			tempNode->next = newNode;
		}
	}
	return (newNode);
}
