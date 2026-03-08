#include <stdio.h>
#include "main.h"
/**
* print_diagsums - imprime la somme des deux diagonales d'une matrice carrée
* @a: pointeur vers le premier élément de la matrice
* @size: taille de la matrice (carrée)
*/
void print_diagsums(int *a, int size)
{
	int i;
	int somme1 = 0;
	int somme2 = 0;

	for (i = 0; i < size; i++)
	{
		somme1 += a[i * size + i];
		somme2 += a[i * size + (size - 1 - i)];
	}


	printf("%d, %d\n", somme1, somme2);
}
