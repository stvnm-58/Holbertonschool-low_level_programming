#include "main.h"
/**
* print_chessboard - prints the chessboard
* @a: pointer to the 2D array representing the board
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
int i = 0;/*ligne*/
int j; /*colonne*/

while (i < 8)/*défile les lignes*/
{

	for (j = 0;  j < 8 ; j++)
	{
		_putchar(a[i][j]);/*écrit ce qui correspond dans la colonne j*/
	}

	i++;/*passe à la ligne suivante*/

_putchar('\n');
}

}
