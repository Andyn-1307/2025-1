#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo.
bool ehPrimo(int n) {
    if (n < 2) return false;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
             return false;
    }
    return true;
}
// Função principal.
// Ela lê dois números inteiros e imprime todos os números primos entre eles.
int main() {
    int n1, n2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    if ( n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    };

    printf("Os numeros primos entre %d e %d sao: ", n1, n2);

    for (int i = n1; i <= n2; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}