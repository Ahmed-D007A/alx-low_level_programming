#include "main.h"
/**
*_pow_recursion - the value of x raised to the power of y.
*@x: the number
*@y: the power
*Return: the value
*/
int _pow_recursion(int x, int y)
{
	int n = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	n = n * (_pow_recursion(x, y - 1));
	return (n);
}
