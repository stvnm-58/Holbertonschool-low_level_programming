#include "main.h"
/**
* _strcat - Concatenates two strings
* @dest: The destination string to be appended to
* @src: The source string to append
*
* Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)

{
	int i = 0; /*compteur pour destination*/
	int j = 0; /*compteur pour source*/

	while (dest[i] != '\0')
	/*compte jusqu'à tomber sur NULL. De la destination*/
{
		i++;
}

	while (src[j] != '\0')
{
		dest[i] = src[j];
		i++;
		j++;
/*Prends les éléments de source pour ajouter à la suite de destination*/
}

dest[i] = '\0';
/*conclu par NULL*/

return (dest);

}

