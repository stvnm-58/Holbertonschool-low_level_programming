#include <unistd.h>
/*définie ce que doit faire _putchar*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}