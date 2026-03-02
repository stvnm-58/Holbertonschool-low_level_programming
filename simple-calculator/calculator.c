#include <stdio.h>
/**
* addition - Calcule la somme de deux entiers
*
* Description: Demande deux nombres à l'utilisateur et affiche le résultat.
* Return: Toujours 0.
*/

/**
* substraction - Calcule la différence entre deux entiers
*
* Description: Demande deux nombres à l'utilisateur et soustrait le second
* au premier.
* Return: Toujours 0.
*/

/**
* multiplication - Calcule le produit de deux entiers
*
* Description: Demande deux nombres à l'utilisateur et affiche le résultat.
* Return: Toujours 0.
*/

/**
* division - Effectue une division entière
*
* Description: Demande deux nombres. Vérifie si le diviseur n'est pas nul
* avant d'effectuer l'opération pour éviter un crash.
* Return: Toujours 0.
*/
int addition(void);
int subtraction(void);
int multiplication(void);
int division(void);

int addition(void) /* Choix 1 pour Addition*/
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

int subtraction(void) /*Choix 2 pour Subtraction*/
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

int multiplication(void) /*Choix 3 pour Multiplication*/
{
	int a, b;
	int result; 

printf("A: ");
scanf("%d", &a);
printf("B: ");
scanf("%d", &b);

	result = a * b;
printf("Result: %d\n", result);

return (0);
}

int division(void) /* Choix 4 pour Subtraction. S'arrête si division par 0*/
{
	int a, b;
	int result;


printf("A: ");
scanf("%d", &a);
		if (a == 0)
		{
		printf("Error: division by zero");
		return(0);
		}

printf("B: ");
scanf("%d", &b);
		if (b == 0)
		{
		printf("Error: division by zero");
		return(0);
		}

	result = a / b;
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
		subtraction();
	}

	if (choice == 3)
	{
		multiplication();
	}

	if (choice == 4)
	{
		division();
	}


}

return (0);

}
