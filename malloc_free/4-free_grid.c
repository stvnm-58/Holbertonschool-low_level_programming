#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
int i = 0

for (i = 0; i < height; i++)
/*on libère la mémoire de la ligne, i par i*/
{
	free(grid[i]);
}
/*une fois que tout est clean dans la ligne, on cfree grid*/
	free(
		
	);

}
