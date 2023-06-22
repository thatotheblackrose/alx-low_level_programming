#include <stdio.h>

void print_fibonacci(int n) {
    int a = 1, b = 2;
    int i;

    printf("%d, %d, ", a, b);

    for (i = 3; i <= n; i++) {
        int next = a + b;
        printf("%d", next);

        if (i != n)
            printf(", ");
        
        a = b;
        b = next;
    }

    printf("\n");
}

int main() {
    int n = 98;
    print_fibonacci(n);

    return (0);
}

