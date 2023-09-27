#include "main.h"

/**
 * set_string - Value of a pointer to a char setting
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
