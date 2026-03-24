#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* add_node_end - ajoute un nouveau nœud à la fin d'une liste list_t
* @head: double pointeur vers la tête de la liste
* @str: chaîne de caractères à dupliquer
*
* Return: l'adresse du nouvel élément, ou NULL en cas d'échec
*/
list_t *add_node_end(list_t **head, const char *str)
{

list_t *new_node;
list_t *last;
char *new_str;
unsigned int length = 0;

new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

while (str[length])
		length++;


	new_node->str = new_str;
	new_node->len = length;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;

return (new_node);
}
