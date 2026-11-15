#include <stdio.h>

int fibonacciNth(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacciNth(n - 1) + fibonacciNth(n - 2);
}

int main() {
    int n = 7;
    printf("The %d-th Fibonacci term is = %d\n", n, fibonacciNth(n));
    return 0;
}