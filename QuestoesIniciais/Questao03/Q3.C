#include <stdio.h>

// Função para inverter um número inteiro.
int invertNumero(int n) {
    int invertido = 0;

    while (n > 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }

    return invertido;
}
// Função principal.
// Ela lê um número inteiro e imprime o número invertido.
int main () {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int invertido = invertNumero(n);
    printf("O numero invertido eh: %d\n", invertido);

    return 0;
}