#include "main.h"

/**
 * _isdigit - Checks for a digigt
 * @c: The Character to be checcked
 * Return: 1 fr digit character or 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
