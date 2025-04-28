#include <stdio.h>
// Função para calcular a potência de um número inteiro.
// Ela recebe dois inteiros: a base e o expoente, e retorna a base elevada ao expoente.
int main (){
    int VetorA[5], VetorB[5];
    int i;

    printf("Digite 5 numeros inteiros para o vetor A:\n");
    for (i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &VetorA[i]);
    }
    printf("Digite 5 numeros inteiros para o vetor B:\n");
    for (i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &VetorB[i]);
    }
    
    printf("Numeros inteiros em comum entre os vetores A e B:\n");
    for (i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (VetorA[i] == VetorB[j]){
                printf("%d ", VetorA[i]);
                break;
            }
        }
    }


    return(0);
}