#include 4-isalpha.c "main.h"

/**
*  _isalpha - Entry point
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

