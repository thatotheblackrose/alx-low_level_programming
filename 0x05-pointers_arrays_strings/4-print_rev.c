#include "main.h"
#include <stdio.h>
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;

	int i;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (i = longi; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
