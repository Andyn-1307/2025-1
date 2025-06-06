//Questao 5.3 - fibonacci binet

#include <stdio.h>
#include <time.h>
#include <math.h>

long long fibonacci_binet(int n) {
    const double sqrt5 = sqrt(5.0);
    const double phi = (1.0 + sqrt5) / 2.0;
    const double psi = (1.0 - sqrt5) / 2.0;

    double result = (pow(phi, n) - pow(psi, n)) / sqrt5;

    return (long long)(result + 0.5); 
}

int main() {
    int n,i;
    int N_Max = 1000;
    double tt = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 0; i < N_Max; i++) {
        clock_t start = clock();
        fibonacci_binet(n);
        clock_t end = clock();
        tt += (double)(end - start) / CLOCKS_PER_SEC;
    }

    printf("Tempo medio: %f segundos\n", tt / N_Max);
    return 0;
}
/*
|   n     | Tempo Medio (s)  |
|---------|------------------| 
| 10      |    0.000003      |
| 100     |    0.000000      |
| 1000    |    0.000001      |
| 10000   |    0.000006      |
| 100000  |    0.000002      |
------------------------------ 
*/