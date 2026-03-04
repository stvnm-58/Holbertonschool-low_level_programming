#include "main.h"
/**
* _strncat - Concatenates two strings using at most n bytes from src
* @dest: The destination string to be appended to
* @src: The source string to append
* @n: The maximum number of bytes to copy from src
*
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0; /*compteur pour destination*/
	int j = 0; /*compteur pour source*/

	while (dest[i] != '\0')
	{
		i++;
	}

	/*
	 * boucle tant que j est plus petit que n et src[j] ne rencontre pas '\0'
	 */
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
