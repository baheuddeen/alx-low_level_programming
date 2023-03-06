#include "main.h"

/**
 * set_string - sets the value of a pointer to a char..
 * @s: address of the string to change.
 * @to: the value to set.
 */

void set_string(char **s, char *to)
{
    *s = to;
}
