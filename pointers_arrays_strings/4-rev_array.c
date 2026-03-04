#include "main.h"
/**
* reverse_array - Reverses the content of an array of integers
* @a: The array of integers to reverse
* @n: The number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int i = 0; /*décompte du début*/
	int j = n - 1; /*décompte de la fin*/
	int tmp; /*mon stockage temporaire*/

	while (i < j)
	{
		tmp = a[i]; /*stock dans temporaire*/
		a[i] = a[j]; /*attribu la fin à a actuel*/
		a[j] = tmp; /*récupère ce qu'il y a dans temporaire*/

		i++;
		j--;
		/*continu le process jusqu'à arriver au milieu*/
	}
}
