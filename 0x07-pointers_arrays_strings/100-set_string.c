#include "main.h"

/**
 * set_string - Entry point
 * @s: input
 * @to: input
 * --- a/main.h
 * +++ b/main.h
 * @@ -6,6 +6,7 @@
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
*s = to;
}
