#include "main.h"
/**
* _atoi - convertit une chaine en entier
* @s: la chaine à convertir                 
*
* Return: l'entier converti
*/
int _atoi(char *s)
{
	int i;
	int signe;
	unsigned int resultat;

	i = 0;
	signe = 1;
	resultat = 0;

	// Défiler les chiffres
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			signe *= -1;
		}
		i++;
	}

	//  Convertion
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		resultat = (resultat * 10) + (s[i] - '0');
		i++;
	}

	return (resultat * signe);
}