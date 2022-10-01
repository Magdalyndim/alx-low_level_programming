#include "main.h"

/**
 * _puts - prints string and a new line
 * @str: pointer to the particular string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
