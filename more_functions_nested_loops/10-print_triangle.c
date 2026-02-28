#include "main.h"
/**
* print_triangle - prints a triangle, followed by a new line
* @size: the size of the triangle
*
* Description: uses the character # to print a triangle.
* If size is 0 or less, only prints a new line.
*/
void print_triangle(int size)
{
int i;
int j;


if (size <= 0)
{
_putchar('\n');
}


else
{

for (i = 0; i < size ; i++)
{

for (j=0 ; j < size - i - 1 ; j++)
{
_putchar(' ');
}

for (j=0; j < i + 1; j++)
{
_putchar('#');
}

_putchar('\n');

}

}

}
