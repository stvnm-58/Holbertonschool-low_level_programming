#include "main.h"
/**
* _strcmp - Compares two strings
* @s1: The first string
* @s2: The second string
*
* Return: The difference
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	/*la boucle avance et ne s'arrête que lorsque s1 et s2 sont identique*/
	{
		i++;
	}

	return (s1[i] - s2[i]);
	/*retourne le caractère qui a été trouvé différent*/
}
