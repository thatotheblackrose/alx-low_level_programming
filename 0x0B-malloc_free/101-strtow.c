#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
int flag = 0;
int c, w = 0;

for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}
return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings (Success)
 * or NULL (error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, c = 0, start;

if (str == NULL || *str == '\0')
return (NULL);
len = strlen(str);
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **)malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
if (str[i] == ' ')
{
if (c)
{
tmp = (char *)malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
{
while (k > 0)
free(matrix[--k]);
free(matrix);
return (NULL);
}
strncpy(tmp, str + start, c);
tmp[c] = '\0';
matrix[k++] = tmp;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
if (c)
{
tmp = (char *)malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
{
while (k > 0)
free(matrix[--k]);
free(matrix);
return (NULL);
}
strncpy(tmp, str + start, c);
tmp[c] = '\0';
matrix[k++] = tmp;
}
matrix[k] = NULL;
return (matrix);
}
