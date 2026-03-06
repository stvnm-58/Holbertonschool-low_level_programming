#include "main.h"





int main(int argc, char *argv[])
{

int i = 0;
int j;
(void)argc;

while (argv[i] < argc)
{
    for (j = 0; argv[i][j] != '\0'; j++)
    {
        _putchar(argv[i][j]);
    }
i++;
}

_putchar('\n');

return(0);
}
