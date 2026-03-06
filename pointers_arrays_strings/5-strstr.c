#include "main.h"
/**
* _strstr - locates a substring
* @haystack: the string to be searched
* @needle: the substring to be located
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;	/* pour scan haystack */
	int j;		/* pour scan needle */

	if (*needle == '\0')
		return (haystack);


	while (haystack[i] != '\0')/*scan haystack*/
	{
		j = 0;/* remise à 0 */

		/* tant qu'il y a correspondance haystack, needle on continue */
		while (haystack[i + j] == needle[j])
		{
			/* Si le prochain caractère de needle est la fin (\0)...*/
			if (needle[j + 1] == '\0')
				/* on renvoi l'adresse haystack correspondant i */
				return (&haystack[i]);

			j++;/* carac suivant */
		}
		i++;/* carac suivant du haystack */
	}

	return ('\0');/* si echec alors NULL */
}
