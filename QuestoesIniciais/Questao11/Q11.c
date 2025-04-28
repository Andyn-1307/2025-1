#include <stdio.h>

// Função para realizar a busca binária
int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return meio; // Encontrou o valor, retorna o índice
        } else if (vetor[meio] < valor) {
            inicio = meio + 1; // Procura na parte da direita
        } else {
            fim = meio - 1; // Procura na parte da esquerda
        }
    }

    return -1; // Não encontrou
}

int main() {
    int vetor[] = {2, 4, 7, 10, 13, 18, 20, 25}; // Vetor ordenado
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(vetor, tamanho, valor);

    if (resultado != -1) {
        printf("Valor %d encontrado na posição %d.\n", valor, resultado);
    } else {
        printf("Valor %d não encontrado no vetor.\n", valor);
    }

    return 0;
}