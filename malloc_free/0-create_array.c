#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}

char *array;
int i = 0;

array = malloc(sizeof(char) * size);
/*allocation de la mémoire de taille char fois le nombre size demandé*/

if (array == NULL)
/*retour NULL */
{
return (NULL);
}

while ( i < size )
/*on inègre c dans le positionnement i du tableau*/
{
	array[i] = c;
	i++;
}


return(array);

}
