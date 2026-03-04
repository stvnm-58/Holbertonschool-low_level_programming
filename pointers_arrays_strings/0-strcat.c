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
{
		i++;
}

	while (src[j] != '\0')
{
		dest[i] = src[j];
		i++
		j++

}

dest[i] = '\0';

return (dest);

}

