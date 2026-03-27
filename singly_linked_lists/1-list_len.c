#include "lists.h"
/**
 * list_len - renvoie le nombre d'éléments d'une liste chaînée
 * @h: pointeur vers le début de la liste (list_t)
 *
 * Return: le nombre de nœuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

while (current != NULL)
{
	current = current->next;
	count++;
}

return (count);

}
