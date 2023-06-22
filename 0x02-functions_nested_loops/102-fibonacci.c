#include <stdio.h>

/**
 * main - Prints the first 52 Fibonacci numbers
 * Return: 0 (indicating successful execution)
 */
int main(void)
{
    int i = 0;
    long j = 1, k = 2;
    
    while (i < 52)
    {
   if (i == 0)
    rintf("%ld", j);
    else if (i == 1)
    printf(", %ld", k);
    else
    {
    k += j;
    j = k - j;
    printf(", %ld", k);
    }
    ++i;
    }
    printf("\n");   
    return (0);
}
