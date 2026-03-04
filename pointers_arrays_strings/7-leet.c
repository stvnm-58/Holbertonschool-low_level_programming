#include "main.h"
/**
* leet - Encodes a string into 1337
* @s: The string to be encoded
*
* Return: A pointer to the encoded string
*/
char *leet(char *s)
{
	int i = 0;
	int j;
	char lettres[] = "aAeEoOtTlL"; /*liste des lettres à remplacer*/
	char chiffres[] = "4433007711"; /*liste des chiffres dans l'ordre des lettres à changer*/

	while (s[i] != '\0')
	{
		j = 0;
		while (lettres[j] != '\0')
		{
			if (s[i] == letters[j]) /*si rencontre une des lettres*/
			{
				s[i] = chiffres[j]; /*alors remplace par le numéro correspondant dans la file*/
			}
			j++;
		}
		i++;
	}

	return (s);
}