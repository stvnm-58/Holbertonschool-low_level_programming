#include "lists.h"
#include <stdio.h>
/**
 * print_list - Affiche tous les éléments d'une liste list_t.
 * @h: Pointeur vers la tête de la liste.
 *
 * Return: Le nombre de nœuds.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

while (current != NULL)
{
	if (current->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	else
	{
		printf("[%u] %s\n", current->len, current->str);
	}

	count++;
	current = current->next;
}
return (count);
}

