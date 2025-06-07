//Questao 5.2 - Fibonacci Iterativo

#include <stdio.h>
#include <time.h>

long long fibonacci_iterativo(int n) {
    if (n <= 1) return 1;

    long long a = 1, b = 1, c;
    int i;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    int N_Max = 1000;
    double tt = 0;
    int i;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 0; i < N_Max; i++) {
        clock_t start = clock();
        fibonacci_iterativo(n);
        clock_t end = clock();
        tt += (double)(end - start) / CLOCKS_PER_SEC;
    }

    printf("Tempo medio: %f segundos\n", tt / N_Max);
    return 0;
}

/*
| n  | Tempo Medio (s)  |
|----|------------------| 
| 100 |    0.000000     |
| 150 |    0.000000     |
| 200 |    0.000000     |
| 250 |    0.000001     |
| 300 |    0.000001     |
| 350 |    0.000001     |
| 400 |    0.000001     |
-------------------------------
*/