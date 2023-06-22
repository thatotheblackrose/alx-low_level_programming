#include <stdio.h>

/**
 * main - Prints the first 52 Fibonacci numbers, starting with 1 and 2,
 * separated by comma follwed by a space.
 * Return: always 0.
 */

void fibonacci(int n)
{
    int fib_list[n];
    fib_list[0] = 1;
    fib_list[1] = 2;

    printf("%d, %d", fib_list[0], fib_list[1]);

    for (int i = 2; i < n; i++)
    {
        fib_list[i] = fib_list[i - 1] + fib_list[i - 2];
        printf(", %d", fib_list[i]);
    }
    printf("\n");
}

int main()
{
    fibonacci(50);

    return 0;
}
