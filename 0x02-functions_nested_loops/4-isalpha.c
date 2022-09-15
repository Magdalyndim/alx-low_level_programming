#include "main.h"

/**
* _isalpha - Function that checks if C is a letter
* @c: single letter input
* Return: 1 if c is a letter (lower or uppercase), 0 otherwise
*/
int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

