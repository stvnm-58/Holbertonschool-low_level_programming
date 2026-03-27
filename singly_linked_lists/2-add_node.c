#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - ajoute un nouveau nœud au début d'une liste list_t
 * @head: double pointeur vers la tête de la liste
 * @str: chaîne de caractères à dupliquer dans le nouveau nœud
 *
 * Return: l'adresse du nouvel élément, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
