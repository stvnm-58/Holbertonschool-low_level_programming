#include "main.h"





int main(int argc, char *argv[])
{

int i = 0;
int j;
(void)argc;

while (i < argc)
/*on cale la limite de i sur le argc*/
{


    for (j = 0; argv[i][j] != '\0'; j++)
    /*boucle qui print chaque char(en position j) du argv déterminé par i*/
    {
        _putchar(argv[i][j]);
    }
_putchar('\n');
i++;
}



return(0);
}
