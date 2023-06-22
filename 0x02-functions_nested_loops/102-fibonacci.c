#include <stdio.h>

/**
 * main - Prints the first 52 Fibonacci numbers
 * Return: 0 (indicating successful execution)
 */

int main(void)
{
    int i;
    long j = 1, k = 2;
    
    printf("%ld", j);
    for (i = 1; i < 52; ++i)
    {
        printf(", %ld", k);
        long temp = k;
        k = j + k;
        j = temp;
    }
    
    printf("\n");  
    return (0);
}
