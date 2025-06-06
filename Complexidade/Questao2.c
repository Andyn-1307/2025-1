//Questão 2: Implemente uma função recursiva

#include <stdio.h>

int x(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return x(n - 1) + x(n - 2);
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int R = x(n);
    printf("Resultado de %d eh %d\n", n, R);

    return 0;
}