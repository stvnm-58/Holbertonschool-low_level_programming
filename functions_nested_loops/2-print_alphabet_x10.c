#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)

{
int i = 0;
char l;

while (i < 10)
{
l = 'a';

while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
i++;
}
}
