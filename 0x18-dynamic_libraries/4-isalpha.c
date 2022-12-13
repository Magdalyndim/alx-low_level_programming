#include "main.h"

/**
 * _isalpha - function that checks if c is a letter
 * @c: character to check
 *
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */

int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

