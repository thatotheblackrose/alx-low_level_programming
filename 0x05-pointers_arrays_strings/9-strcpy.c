#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointes to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int x;

while (*(src + i) != '\0')
{
i++;
}

for (x = 0; x < i; x++)
{
dest[x] = src[x];
}

dest[i] = '\0';
return (dest);
}
