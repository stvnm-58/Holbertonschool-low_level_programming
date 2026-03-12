#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* nom_de_la_fonction - Description courte de ce qu'elle fait
* @parametre1: Description du premier argument
* @parametre2: Description du second argument
*
* Return: Description de la valeur de retour (ex: 0 en cas de succès)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *result;
unsigned int i = 0, i2 = 0, j = 0, j2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	;

	for (i2 = 0; s2[i2] != '\0' && i2 < n; i2++)
	/*c'est ici qu'on limite le comptage à \0 ET < n*/
	;

result = malloc (sizeof(char) * i + i2 + 1);
if (result == NULL)
    {
	return (NULL);
	}


for (j = 0; s1[j] != '\0' ; j++ )
{
	result[j] = s1[j];
}

for (j2 = 0; s2[j2] != '\0' && j2 < n ; j++, j2++)
/*même chose que précédemment pour limiter le nombre d'inscription*/
{
	result[j] = s2[j2];
}
	result[j] = '\0';

return (result);

}
