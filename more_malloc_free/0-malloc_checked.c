#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire avec malloc
 * @b: nombre d'octets à allouer
 * Return: un pointeur vers la mémoire allouée
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
