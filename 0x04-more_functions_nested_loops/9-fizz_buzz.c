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
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		printf("%c", i < 100 ? ' ' : '\n');
	}

	return (0);
}
