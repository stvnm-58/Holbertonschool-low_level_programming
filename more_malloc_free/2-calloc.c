#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of elements in the array
* @size: size of each element in bytes
*
* Return: pointer to the allocated memory, or NULL if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{
	return(NULL);
}

int i = 0;
char *ptr = 0;
unsigned int total = nmemb * size;

ptr = malloc(total);
if (ptr == NULL)
{
	return (NULL);
}


for (i = 0; i < total; i++ )
{
	ptr[i] = 0;
}

return (ptr);

}
