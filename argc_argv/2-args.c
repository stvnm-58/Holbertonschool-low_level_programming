#include "main.h"





int main(int argc, char *argv[])
{

int i = 0;
int j;
(void)argc;

while (argv[i] > argc)
{
    for (j = 0; j != '\0'; j++)
    {
        _putchar((argv[j] - 1) + '0');
    }
i++;
}

_putchar('\n');

return(0);
}
