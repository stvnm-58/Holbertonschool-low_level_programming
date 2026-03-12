#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimension grid previously created by alloc_grid
 * @grid: the 2D array to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;
	/* Si la grille est déjà vide, on ne fait rien pour éviter un crash */
	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	/* on libère la mémoire de la ligne, i par i */
	{
		free(grid[i]);
	}
	/* une fois que tout est clean dans les lignes, on free le tableau de pointeurs */
	free(grid);
}
