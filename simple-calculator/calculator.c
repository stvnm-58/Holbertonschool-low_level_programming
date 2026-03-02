#include <stdio.h>
/**
* main - Point d'entrée du programme de calculatrice
*
* Description: Affiche un menu, récupère le choix de l'utilisateur
* via scanf et permet de quitter le programme en tapant 0.
*
* Return: Toujours 0 (Succès)
*/
int main(void)
{
int choice;

printf("1) Add\n2) Substract\n3) Multiply\n4) Divide\n0) Quit\n");
printf("Choice: ");
scanf("%d", &choice);

if (choice == 0);
{
	printf ("Bye!\n");
}

return (0);

}
