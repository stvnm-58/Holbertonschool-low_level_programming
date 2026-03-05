#include "main.h"
/**
* _strchr - localise un caractère dans une chaîne
* @s: la chaîne de caractères à parcourir
* @c: le caractère à rechercher
*
* Return: un pointeur vers la première occurrence de c,
* ou NULL si le caractère n'est pas trouvé
*/
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] >= '\0')
{
	if (s[i] == c)
	{
		return (&s[i]);
	}

	if(s[i] == '\0')
	{
		break;
	}

i++;
}

return ('\0');

}
