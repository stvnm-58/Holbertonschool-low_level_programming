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

	/* On parcourt la chaîne s tant qu'on n'est pas sur NULL*/
	while (s[i] != '\0')
	{
		found = 0; /* "interrupteur" find à 0 */
		j = 0;

		/* On cherche si s[i] existe dans accept */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;	/* On l'a trouvé ! 🎯 */
				count++;	/* On augmente le compte*/
				break; 
			}
			j++;
		}

		/* Si après avoir fouillé tout 'accept', found est toujours à 0 on stop là */
		if (found == 0)
		{
			return (count);
		}

		i++;
	}

	return (count);
}
