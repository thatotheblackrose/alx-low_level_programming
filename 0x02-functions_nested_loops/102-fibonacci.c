#include <stdio.h>

/**
 * main - Prints the first 52 Fibonacci numbers, starting with 1 and 2,
 * separated by comma follwed by a space.
 * Return: always 0.
 */

int main(void)

{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
	sum = fib1 + fib2;
	printf("%1u", sum);
	fib1 = fib2;
        fib2 = sum;
	if (count == 49)
	printf("\n");
	else
	printf(", ");
	}
	Return (0);
}
