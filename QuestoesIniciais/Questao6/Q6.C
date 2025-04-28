#include <stdio.h>

int main (){
    int matrizA[3][3], matrizB[3][3], matrizSoma[3][3];
    int i, j;
    // Declaração de matrizes 3x3 para armazenar os elementos inteiros.
    // A matrizA e matrizB armazenarão os elementos digitados pelo usuário,
    printf("Digite os elementos da matriz A (3x3):\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Digite os elementos da matriz B (3x3):\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            matrizSoma[i][j] = matrizA[i][j]+matrizB[i][j];
            // A matrizSoma ira armazenar a soma dos elementos correspondentes das matrizes A e B.
        }
    }
    // A matrizSoma ira mostrar a soma das matrizes A e B.
    printf("Soma das matrizes A e B:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){

            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }


    return(0);
}