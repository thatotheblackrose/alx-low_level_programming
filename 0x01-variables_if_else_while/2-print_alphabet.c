#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    int lowerCase = 'a';

    while (lowerCase <= 'z')
    {
        putchar(lowerCase);
        lowerCase += 1;
    }

    printf("\n");

    return 0;
}

