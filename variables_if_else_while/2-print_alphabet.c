#include <stdio.h>

int main (void)
{
char lettre = 'a';

putchar (lettre);

while (lettre < 'z' )
{
putchar (lettre + 1);
}

return (0);

}
