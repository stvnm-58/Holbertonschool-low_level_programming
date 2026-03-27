#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libère une liste de type list_t.
 * @head: Pointeur vers le début de la liste.
 *
 * Description: Libère chaque nœud de la liste, ainsi que
 * la chaîne de caractères dupliquée à l'intérieur.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
