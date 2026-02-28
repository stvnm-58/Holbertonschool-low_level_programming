#include "main.h"

/**
* print_diagonal - dessine une ligne diagonale dans le terminal.
* @n: le nombre de fois que le caractère \ doit être imprimé.
*/
void print_diagonal(int n)
{
int i;
int b;

if (n <= 0)
{
_putchar('\n');
}


else
{

for (i = 0; i < n; i++)
{
           
for (b = 0; b < i; b++)
{
_putchar(' ');
}
        
_putchar('\\');
_putchar('\n');
}
}
}
