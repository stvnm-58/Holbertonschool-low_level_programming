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

int i;
int num1 = 0;
int num2 = 0;
int resultat;
int div; 



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

		if (resultat < 0)
		/*affichage des négatifs*/
		{
			_putchar('-');
			resultat = -resultat;
		}

		div = 1;
		while (div <= resultat / 10)
		/*x10 pour à chaque tourne pour print centaine, dizaine, unité etc etc.*/
		{
			div *= 10;
		}

		/* Affichage des chiffres */
		while (div > 0)
		{
			_putchar(((resultat / div) % 10) + '0');
			div /= 10;
		}
	}
	_putchar('\n');

	return (0);

}
