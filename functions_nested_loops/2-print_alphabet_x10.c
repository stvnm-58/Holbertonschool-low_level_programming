#include "1-main.h"
/**
 * définie la fonction print_alphabet
 */
void print_alphabet(void)

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