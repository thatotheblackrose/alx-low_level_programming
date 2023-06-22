#include <stdio.h>

void print_fibonacci(int n) {
    unsigned long long a = 1, b = 2; // Use unsigned long long to support larger numbers
    int i;

    printf("%llu, %llu, ", a, b);

    for (i = 3; i <= n; i++) {
        unsigned long long next = a + b;
        printf("%llu", next);

        if (i != n)
            printf(", ");
        
        a = b;
        b = next;
    }

    printf("\n");
}

int main(void) {
    int n = 98;
    print_fibonacci(n);

    return (0);
}

