#include "main.h"
#include <stdio.h>

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if the string is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks if a string is a palindrome recursively
 * @s: string to check
 * @i: starting index
 * @len: length of the string
 *
 * Return: 1 if the string is a palindrome, 0 if it is not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if (i >= len)
	return (1);
	return (check_pal(s, i + 1, len - 1));
}
