#include <stdio.h>
#include "dog.h"
/**
* print_dog - affiche les informations d'une structure dog
* @d: pointeur vers la structure dog à afficher
*
* Description: Si d est NULL, la fonction ne fait rien.
* Si un élément de la structure est NULL, affiche (nil) à sa place.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != '\0')
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
