#include <stdio.h>

int main() {
    int numeros[10];
    int jaContado[10] = {0};

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nFrequência dos números:\n");

    for (int i = 0; i < 10; i++) {
        if (jaContado[i] == 0) {
            int contador = 1;

            for (int j = i + 1; j < 10; j++) {
                if (numeros[i] == numeros[j]) {
                    contador++;
                    jaContado[j] = 1;
                }
            }

            printf("Número %d apareceu %d vez(es)\n", numeros[i], contador);
        }
    }

    return 0;
}