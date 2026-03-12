#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* array_range - creates an array of integers
* @min: first integer number
* @max: last integer number
*
* Return: pointer to newly created array or NULL if fails
*/
int *array_range(int min, int max)
{

int i = 0;
int *array; 
int size = max - min + 1;
/*détermine le nombre entre max et min
* qui permettra de set la taille du tableau avec malloc
*/

if (max < min)
{
	return (NULL);
}

array = malloc(sizeof(int) * size);
if (array == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
/*boucle la fois size*/
{
	array[i] = min + i;
	/*écrit le min + i (size fois)*/
}

return (array);

}
