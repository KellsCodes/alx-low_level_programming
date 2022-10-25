#include "lists.h"
/**
 * add_node - adds new node at the beginning of a list_t list
 * @head: pointer to the address of the node to be added
 * @str: str data at the node created
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tempNode = malloc(sizeof(list_t));

	if (tempNode == NULL)
		return (NULL);

	tempNode->str = strdup(str);
	tempNode->len = strlen(str);
	tempNode->next = *head;
	*head = tempNode;

	return (tempNode);
}
