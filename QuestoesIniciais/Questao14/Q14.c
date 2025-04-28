#include <stdio.h>
#include <string.h>

// Função para aplicar a cifra de César
void cifraCesar(char mensagem[], int deslocamento) {
    int i = 0;
    char c;

    while (mensagem[i] != '\0') {
        c = mensagem[i];

        // Se for letra minúscula
        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + deslocamento) % 26) + 'a';
        }
        // Se for letra maiúscula
        else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + deslocamento) % 26) + 'A';
        }

        mensagem[i] = c;
        i++;
    }
}
// Função principal
// Recebe uma mensagem e um deslocamento, aplica a cifra de César e imprime a mensagem criptografada
int main() {
    char mensagem[100];
    int deslocamento;

    printf("Digite a mensagem: ");
    scanf(" %[^\n]", mensagem);

    printf("Digite o deslocamento: ");
    scanf("%d", &deslocamento);
    // Normaliza o deslocamento para o intervalo [0, 25]
    
    cifraCesar(mensagem, deslocamento);

    printf("\nMensagem criptografada: %s\n", mensagem);

    return 0;
}
