#include "main.h"

int _strcmp(char *s1, char *s2)
{
int i = 0; 

while (s1[i] == s2[i])
/*la boucle avance et ne s'arrête que lorsque s1 et s2 sont identique*/
{
 i++;
}


return (s1[i] - s2[i])
/*retourne le caractère qui a été trouvé différent*/
}
