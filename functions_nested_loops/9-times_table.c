#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int i, resultat;

i = 0;
while (i <= 9)
{
resultat = i * 9;

if (i == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
            
            
if (resultat < 10)
{
_putchar(' ');
_putchar(resultat + '0');
}
else
{
_putchar((resultat / 10) + '0');
_putchar((resultat % 10) + '0');
}
}
i++;
}
_putchar('\n');
}
