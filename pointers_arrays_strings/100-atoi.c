#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: the string to be converted
*
* Return: the converted integer
*/
int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	unsigned int resultat = 0;


	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))/*boucle tant qu'on est pas sur NULL ET qu'on a pas croisé de chiffre*/
	{
		if (s[i] == '-')/* si tiret*/
		{
			signe = signe * -1;/* rend imper nega' et pair posi'*/
		}
		i++;
	}


	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))/*boucle tant qu'on est pas sur NULL et qu'on est sur un chiffre*/
	{
		resultat = (resultat * 10) + (s[i] - '0');/*multiplie résultat (de base à 0) par 10 pour décaler unité vers dizaine puis soustraction apr le '0' (48 en ASCII)*/
		i++;
	}

	return (resultat * signe);
}
