//Questao 4: Analise de Complexidade de Algoritmos Recursivos

#include <stdio.h>
#include <time.h>

int x(int n) {
    if (n <= 1) return 1;
    return x(n - 1) + x(n - 2);
}

int main() {
    int n,i;          
    int N_Max = 1000;    
    double total_time = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 0; i < N_Max; i++) {
        clock_t start = clock();
        x(n);
        clock_t end = clock();
        total_time += (double)(end - start) / CLOCKS_PER_SEC;
    }

    printf("Tempo medio: %f segundos\n", total_time / N_Max);
    return 0;
}

/*
b) Tabela de resultados:
| n  | Tempo Medio (s) |
|----|-----------------| 
| 10 |      0.000000   |
| 15 |      0.000005   | 
| 20 |      0.000039   |
| 30 |      0.004185   |

c) Analise de complexidade:
    Como essa e uma versao simples de Fibonacci ela faz muitas chamadas redudantes 
    tornando sua complexidade O(2^n). Isso acontece porque a funcao x(n) chama a si mesma duas vezes para cada n maior que 1, 
    resultando em uma arvore de chamadas exponencial.
*/