#include <stdio.h>

// Função para inverter um número inteiro (espero que seja numero inteiro mesmo)
int invertNumero(int n) {
    int invertido = 0;

    while (n > 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }

    return invertido;
}
int main () {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int invertido = invertNumero(n);
    printf("O numero invertido eh: %d\n", invertido);

    return 0;
}