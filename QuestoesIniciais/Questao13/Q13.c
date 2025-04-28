#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma = 0;
    int i, j;

    // Leitura da matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) { // Corrigido para iterar até 4
        for (j = 0; j < 4; j++) { // Corrigido para iterar até 4
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da diagonal principal
    for (i = 0; i < 4; i++) { // Corrigido para iterar até 4
        soma += matriz[i][i]; // Linha == Coluna
    }

    printf("\nA soma da diagonal principal e: %d\n", soma);

    return 0;
}