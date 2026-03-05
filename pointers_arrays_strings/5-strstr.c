#include "main.h"
/**
* _strstr - localise une sous-chaîne
* @haystack: la "botte de foin" (chaîne principale)
* @needle: "l'aiguille" (sous-chaîne à chercher)
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j;
if (*needle == '\0')
return (haystack);
while (haystack[i] != '\0')
{
j = 0;
while (haystack[i + j] == needle[j])
{
if (needle[j + 1] == '\0')
return (&haystack[i]);
j++;
}
i++;
}
return ('\0');
}
