//Questao 5.1 - Fibonacci com memoizacao

#include <stdio.h>
#include <time.h>

#define MAX 1000  
long long memo[MAX];  

long long x(int n) {
    if (n <= 1) return 1;
    if (memo[n] != -1) return memo[n]; 
    memo[n] = x(n - 1) + x(n - 2);     
    return memo[n];
}

int main() {
    int n;
    int N_Max = 1000;
    double tt = 0;
    int i, j;

    printf("Digite o valor de n (ate %d): ", MAX - 1);
    scanf("%d", &n);

    for (i = 0; i < MAX; i++) {
        memo[i] = -1;
    }

    for (i = 0; i < N_Max; i++) {
        for (j = 0; j < MAX; j++) {
            memo[j] = -1;
        }

        clock_t start = clock();
        x(n);
        clock_t end = clock();
        tt += (double)(end - start) / CLOCKS_PER_SEC;
    }

    printf("Tempo medio: %f segundos\n", tt / N_Max);
    return 0;
}
/*
| n  | Tempo Medio (s) |
|----|-----------------| 
| 10 |    0.000000     |
| 20 |    0.000000     |
| 30 |    0.000000     |
| 40 |    0.000000     |
| 50 |    0.000001     |
| 60 |    0.000001     |
| 70 |    0.000001     |
------------------------
*/