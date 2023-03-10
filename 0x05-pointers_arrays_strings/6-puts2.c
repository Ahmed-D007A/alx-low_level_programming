#include "main.h"
/**
*puts2 - prints every other character of a string, starting with
*followed by a new line.
*@str: pointer
*/
void puts2(char *str)
{
	char c = *str;

	while (c != '\0')
	{
		_putchar(c);
		c = *++str;
		if (c == '\0')
			break;
		c = *++str;
	}
	_putchar('\n');
}
