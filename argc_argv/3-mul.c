#include "main.h"
/**
* main - multiplie deux nombres passés en arguments
* @argc: nombre d'arguments reçus
* @argv: tableau de chaînes de caractères (les arguments)
*
* Return: 0 si succès, 1 si erreur (mauvais nombre d'arguments)
*/
int main(int argc,char *argv[])
{

int i = 0;
int num1 = 0;
int num2 = 0;
int resultat;



if (argc != 3)
/*Bloc error*/
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');

	return (1);
}



for (i = 0; argv[1][i] != '\0'; i++)
/*conversion argv[1] en entier*/
	{
		num1 = (num1 * 10) + (argv[1][i] - '0');
	}

for (i = 0; argv[2][i] != '\0'; i++)
/*conversion argv[2] en entier*/
	{
		num2 = (num2 * 10) + (argv[2][i] - '0');
	}

resultat = num1 * num2;

if (resultat == '0')
{
	_putchar('0');
}

else
{
	for (i = 0; resultat[i] != '\0'; i++)
	{
		_putchar(resultat[i]);
	}
/*affiche le résultat caractère par caracère en utilisant un tableau pour resultat*/

}

_putchar('\n');
return (0);

}
