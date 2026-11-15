#include <stdio.h>

int fibonacciTerm(int k) {
    if (k <= 0) return 0;
    if (k == 1) return 1;
    return fibonacciTerm(k - 1) + fibonacciTerm(k - 2);
}

void printFibonacciSeries(int N, int current) {
    if (current >= N) return;
    printf("%d ", fibonacciTerm(current));
    printFibonacciSeries(N, current + 1);
}

int main() {
    int N = 8;
    printf("First %d terms of Fibonacci series: ", N);
    printFibonacciSeries(N, 0);
    printf("\n");
    return 0;
}