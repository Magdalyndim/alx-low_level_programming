#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: The name to print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
