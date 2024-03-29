#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  function that prints a name.
 * @name: string to print.
 * @f: function that actallu print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
