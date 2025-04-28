#include <stdio.h>
// Função para calcular a potência de um número inteiro.
int poten(int base, int expoente){
    int i;
    int resultado = 1;
    for (i = 0; i < expoente; i++){
        resultado *= base;
    }

    return resultado;
}
// Função principal.
// Ela lê dois números inteiros (base e expoente) e imprime a potência.
int main (){
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("%d^%d = %d\n", base, expoente, poten(base, expoente));
    return 0;
}