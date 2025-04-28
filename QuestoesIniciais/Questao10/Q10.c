#include <stdio.h>

// Função recursiva que retorna o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Soma dos dois anteriores
    }
}
// Função principal
// Recebe um número inteiro n e imprime o n-ésimo número de Fibonacci
int main() {
    int n;
    printf("Digite a posicao n para encontrar o número de Fibonacci: ");
    scanf("%d", &n);

    printf("O %dº numero de Fibonacci eh: %d\n", n, fibonacci(n));

    return 0;
}