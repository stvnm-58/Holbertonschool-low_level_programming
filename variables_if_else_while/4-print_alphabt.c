#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char l = 'a';

while (l <= 'z')
{

putchar (l);

if (l == 'd')
{
l = l + 2;
}

else if (l == 'p')
{
l = l + 2;
}

else 
{
l++;
}

}
putchar('\n');

return (0);

}
