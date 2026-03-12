#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - alloue de la mémoire avec malloc
* @b: nombre d'octets à allouer
*
* Return: un pointeur vers la mémoire allouée
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	/*Alloue b de place à ptr*/
	if (ptr == NULL)
	{
		exit(98);
		/*kill le programme si null, renvoie 98*/
	}
return (ptr);
/*return ptr si ok*/
}
