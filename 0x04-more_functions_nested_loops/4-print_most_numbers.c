#include "main.h"

/**
 * prints_most_numbers - A function that prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * followed by a new line
 * Return: Always 0
 */

void prints_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
