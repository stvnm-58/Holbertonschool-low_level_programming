#include "main.h"
/**
* _strspn - obtient la longueur d'un sous-segment de préfixe
* @s: chaîne à évaluer
* @accept: chaîne contenant les caractères à faire correspondre
*
* Return: nombre d'octets dans le segment initial de s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
unsigned int count = 0;
int found;
while (s[i] != '\0')
{
found = 0;
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
found = 1;
count++;
break;
}
j++;
}
if (found == 0)
{
return (count);
}
i++;
}
return (count);
}
