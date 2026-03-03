void puts_half(char *str)
/**
* puts_half - Prints the second half of a string.
* @str: The string to be printed.
*
* Return: void.
*/
{
	int i = 0;
	int n;


	while (str[i] != '\0')
	{
		i++;
	}

	n = i / 2;


	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
