#include <stdio.h>
int addition (void);
int substraction (void);
/**
* main - Point d'entrée du programme de calculatrice
*
* Description: Affiche un menu, récupère le choix de l'utilisateur
* via scanf et permet de quitter le programme en tapant 0.
*
* Return: Toujours 0 (Succès)
*/


int addition (void) /* Choix 1 pour Addition*/
{
	int a, b;
	int result;

printf("A: ");
scanf("%d", &a);
printf("B: ");
scanf("%d", &b);


	result = a + b; 
printf("Result: %d\n", result);

return (0);

}

int substraction (void) /*Choix 2 pour Substraction*/
{
	int a, b;
	int result; 

printf("A: ");
scanf("%d", &a);
printf("B: ");
scanf("%d", &b);

	result = a - b;
printf("Result: %d\n", result);

return (0);

}




int main(void)
{
int choice;

while (choice != 0 || choice != 1 || choice != 2 || choice != 3 || choice != 4)
{
printf("1) Add\n2) Substract\n3) Multiply\n4) Divide\n0) Quit\n");
printf("Choice: ");
scanf("%d", &choice);

	if (choice > 4)
	{
	printf("Invalid choice\n");
	}

	if (choice == 0)
	{
		printf ("Bye!\n");
		return (0);
	}

	if (choice == 1)
	{
		addition();
	}

	if (choice == 2)
	{
		substraction();
	}

}

return (0);

}
