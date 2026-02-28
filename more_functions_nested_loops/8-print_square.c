#include "main.h"
/**
* print_square - prints a square followed by a new line
* @size: size of the square
*
* Prints a square using the character '#'.
* If size is 0 or less, it prints only a new line.
*/
void print_square (int size)
{
int i; /* nombre de # sur une ligne*/
int j; /* nombre de saut à la ligne*/

if (size == 0)
{
	_putchar('\n');

}


else
{

for (j = 0; j < size ; j++)
{

			for (i = 0; i < size ; i++)
			{
			_putchar('#');
			}
			 _putchar('\n');
}
}

}