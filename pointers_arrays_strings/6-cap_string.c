#include "main.h"
/**
* cap_string - Capitalizes all words of a string
* @str: The string to be modified
*
* Return: A pointer to the modified string
*/
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char sep[] = " \t\n,;.!?\"(){}"; /*liste des symboles à skip*/

	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		/* if pour passer en maj s'il voit min*/
		{
			str[i] = str[i] - 32;
		}

		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i - 1] == sep[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
			j++;
		}
		i++;
	}

	return (str);
}
