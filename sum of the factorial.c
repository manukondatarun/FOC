#include <stdio.h>
int main() {
    int n, i,fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %lld", n, fact);

    return 0;
}