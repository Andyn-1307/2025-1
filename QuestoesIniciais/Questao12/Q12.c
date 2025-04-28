#include <stdio.h>
#include <string.h>

// Função que verifica se uma palavra é palíndromo
int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return 0; // Não é palíndromo
        }
        inicio++;
        fim--;
    }

    return 1; // É palíndromo
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (ehPalindromo(palavra)) {
        printf("\"%s\" é um palíndromo!\n", palavra);
    } else {
        printf("\"%s\" não é um palíndromo.\n", palavra);
    }

    return 0;
}