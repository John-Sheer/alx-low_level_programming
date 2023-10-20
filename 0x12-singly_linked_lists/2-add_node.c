#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if failse
 */


list_t *add_node(list_t **head, const char *str)
{

	unsigned int i;
	list_t *new;

	new  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}

	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;

	return (new);
}
