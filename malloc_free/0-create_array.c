#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of chars and initializes it with a char
* @size: the size of the array to be created
* @c: the char to initialize the array with
*
* Return: a pointer to the array, or NULL if it fails or if size is 0
*/
char *create_array(unsigned int size, char c)
{

char *array;
int i = 0;

if (size == 0)
{
return (NULL);
}

array = malloc(sizeof(char) * size);
/*allocation de la mémoire de taille char fois le nombre size demandé*/

if (array == NULL)
/*retour NULL */
{
return (NULL);
}

while (i < size)
/*on inègre c dans le positionnement i du tableau*/
{
	array[i] = c;
	i++;
}


return (array);

}
