#include <stdio.h>

int fibonacci_sum(int limit) {
    int a = 1;
    int b = 2;
    int sum_even = 0;
    int temp;

    while (a <= limit) {
        /* Check if the current term is even */
        if (a % 2 == 0) {
            sum_even += a;
        }

        /* Generate the next Fibonacci term */
        temp = a;
        a = b;
        b = temp + b;
    }

    return sum_even;
}

int main() {
    int limit = 4000000;
    int result = fibonacci_sum(limit);

    printf("%d\n", result);

    return 0;
}

