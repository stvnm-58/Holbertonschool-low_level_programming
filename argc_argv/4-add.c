#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 (Success), 1 (Error).
 */
int main(int argc, char *argv[])
{
	int i, j, somme = 0;

	for (i = 1; i < argc; i++)
	/* boucle qui scan chaque argument reçu */
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		/* verif si chiffre */
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Conversion avec atoi */
		somme += atoi(argv[i]);
	}

	printf("%d\n", somme);

	return (0);
}
