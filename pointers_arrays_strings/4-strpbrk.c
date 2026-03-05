#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the string to search
* @accept: the bytes to look for
*
* Return: pointer to the byte in s that matches, or NULL
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;
while (s[i] != '\0')/*scan *s jusqu'à NULL*/
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])/*si concordance entre s[i] et accept, retourne le caractère correspondant*/
{
return(&s[i]);
}
j++;
}
i++;
}
return ('\0');/*retourne NULL si rien*/
}
