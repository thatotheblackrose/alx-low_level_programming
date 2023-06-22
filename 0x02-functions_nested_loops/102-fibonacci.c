#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Return: Nothing
 */

void fibonacci_sequence(int n, unsigned long long sequence[]) {
    sequence[0] = 1;
    sequence[1] = 2;
    
    for (int i = 2; i < n; i++) {
        sequence[i] = sequence[i-1] + sequence[i-2];
    }
}

int main() {
    unsigned long long fibonacci_sequence[50];
    fibonacci_sequence(50, fibonacci_sequence);

    for (int i = 0; i < 49; i++) {
        printf("%llu, ", fibonacci_sequence[i]);
    }
    
    printf("%llu\n", fibonacci_sequence[49]);

    return 0;
}

