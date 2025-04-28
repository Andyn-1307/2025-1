#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char palavraSecreta[20] = "pontoevirgula"; // Palavra a ser adivinhada
    char resposta[20];                      // Palavra sendo formada pelo jogador
    int erros = 0;
    int acertou = 0;
    char letra;
    int tamanho = strlen(palavraSecreta);

    // Inicializa resposta com underline
    for (i = 0; i < tamanho; i++) {
        resposta[i] = '_';
    }
    resposta[tamanho] = '\0'; // Finalizar string corretamente

    printf("=== Jogo da Forca ===\n");

    while (erros < 6 && !acertou) {
        int i;
        printf("\nPalavra: ");
        for (i = 0; i < tamanho; i++) {
            printf("%c ", resposta[i]);
        }

        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);

        int encontrou = 0;
        for (i = 0; i < tamanho; i++) {
            if (palavraSecreta[i] == letra) {
                resposta[i] = letra;
                encontrou = 1;
            }
        }

        if (!encontrou) {
            erros++;
            printf("Letra errada! Erros: %d de 6\n", erros);
        }

        if (strcmp(palavraSecreta, resposta) == 0) {
            acertou = 1;
        }
    }

    if (acertou) {
        printf("\nParabens! Voce acertou: %s\n", palavraSecreta);
    } else {
        printf("\nVoce perdeu! A palavra era: %s\n", palavraSecreta);
    }

    return 0;
}
