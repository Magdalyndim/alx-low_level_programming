#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints characters of a string
 * @str: This is the string reference used
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
