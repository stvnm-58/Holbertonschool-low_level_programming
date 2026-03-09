#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: the string to be duplicated
*
* Return: a pointer to the duplicated string, or NULL if fails
*/
char *_strdup(char *str)
{
if (str == NULL)
{
	return (NULL);
}

int i;
int j = 0;
char *copy;


for (i = 0; str[i] != '\0'; i++)
	;
/*On set i pour connaître le nombre de char*/


copy = malloc(sizeof(char) * i + 1);
/*on envoi le resultat de i dans malloc +1 pour le \0*/


while (str[j] != '\0')
/*copie chaque char de str vers copy*/
{
	copy[j] = str[j];
	j++;
}


copy[j] = '\0';
/*on rajoute bien le NULL à la fin de la boucle*/

if (copy == NULL)
{
	return (NULL);
}

return (copy);

}
