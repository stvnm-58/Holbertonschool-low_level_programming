#include "main.h"
/**
 * _strstr - localise une sous-chaîne
 * @haystack: la "botte de foin" (chaîne principale)
 * @needle: "l'aiguille" (sous-chaîne à chercher)
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0; /* compteur dans haystack */
int j;     /* compteur dans needle */
if (*needle == '\0')
return (haystack);
while (haystack[i] != '\0') /*on scan haystack*/
{
j = 0; /* réinit du scan de needle */		
while (haystack[i + j] == needle[j]) /* tant qu'il y a correspondance on avance*/
{
/* Si le prochain caractère de needle est la fin (\0), c'est gagné ! */
if (needle[j + 1] == '\0') 				
return (&haystack[i]); /*on renvoi le carac correspondant*/
j++; /* scan du carac suivant */
}		
i++; /* Divergeance, on passe au carac haystack suivant */
}
return ('\0'); /* Rien ne correspond, on renvoi NULL */
}
