#include <stdio.h>
unsigned long long int factorial(int n) {
    unsigned long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    unsigned long long int result = factorial(n);
    printf("Factorial of %d = %llu\n", n, result);

    return 0;
}