#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - Crée une grille de 2 dimensions d'entiers
* @width: largeur (colonnes)
* @height: hauteur (lignes)
*
* Return: pointeur vers la grille, ou NULL si échec
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	/*Création du nombre de ligne*/
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		/*création des colonnes*/
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
			free(grid[i]);
			free(grid);
			return (NULL);
			}
		}
		for (j = 0; j < width; j++)
		/*remplissage du tableau*/
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}