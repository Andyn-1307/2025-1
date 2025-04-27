#include <stdio.h>

int poten(int base, int expoente){
    int i;
    int resultado = 1;
    for (i = 0; i < expoente; i++){
        resultado *= base;
    }

    return resultado;
}

int main (){
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("%d^%d = %d\n", base, expoente, poten(base, expoente));
    return 0;
}