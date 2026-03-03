#include "main.h"
/**
* _strlen - calcule la longueur d'une chaîne
* @s: la chaîne de caractères à mesurer
*
* Return: la longueur de la chaîne
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);

}
