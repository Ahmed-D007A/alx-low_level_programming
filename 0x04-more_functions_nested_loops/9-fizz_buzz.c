#include <stdio.h>
/**
*main - main block
*Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		if else (i % 5 == 0)
			printf("Buzz ");
		else 
			printf("%dc", i);
	}
	putchar('\n')
}
