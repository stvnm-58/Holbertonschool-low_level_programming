#include <stdio.h>
/**
* fizzbuzz - prints numbers from 1 to n with a twist
* @n: the upper limit of the numbers to print
*
* Description: prints numbers from 1 to n. For multiples of 3,
* it prints Fizz. For multiples of 5, it prints Buzz.
* For multiples of both, it prints FizzBuzz.
*/
void fizzbuzz(int n)
{
int i;

for (i = 1; i <= n ; i++)
{

if((i % 3 == 0) && (i % 5 == 0))
{
	printf("FizzBuzz");
}


else if (i % 3 == 0)
{
    printf("Fizz");
}


else if(i % 5 == 0)
{
	printf("Buzz");
}


else
{
	printf("%d", i);
}
printf(" ");
}

printf("\n");

}
/**
* main - entry point to test the fizzbuzz function
*
* Return: Always 0 (Success)
*/
int main(void)
{
	fizzbuzz(100);

return(0);

}

