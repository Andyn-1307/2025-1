//Questao 1: Implementacao de uma Arvore Binaria de Busca (ABB)

#include <stdio.h>
#include <stdlib.h>

// a) Estrutura de dados
typedef struct No {
    int dado;
    struct No* esquerdo;
    struct No* direito;
} No;

// b) Funcoes de criacao, remocao, busca e insercao
No* criarNo(int c) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo != NULL) {
        novo->dado = c;
        novo->esquerdo = NULL;
        novo->direito = NULL;
    }
    return novo;
}

No* inserir(No* T, int c) {
    if (T == NULL)
        return criarNo(c);
    if (c < T->dado)
        T->esquerdo = inserir(T->esquerdo, c);
    else if (c > T->dado)
        T->direito = inserir(T->direito, c);
    return T;
}

No* buscar(No* T, int c) {
    if (T == NULL || T->dado == c)
        return T;
    if (c < T->dado)
        return buscar(T->esquerdo, c);
    return buscar(T->direito, c);
}

void removerArvore(No* T) {
    if (T != NULL) {
        removerArvore(T->esquerdo);
        removerArvore(T->direito);
        free(T);
    }
}

// d) Percurso In-ordem
void inOrdem(No* T) {
    if (T) {
        inOrdem(T->esquerdo);
        printf("%d ", T->dado);
        inOrdem(T->direito);
    }
}

// e) Percurso Pre-ordem
void preOrdem(No* T) {
    if (T) {
        printf("%d ", T->dado);
        preOrdem(T->esquerdo);
        preOrdem(T->direito);
    }
}

// f) Percurso Pos-ordem
void posOrdem(No* T) {
    if (T) {
        posOrdem(T->esquerdo);
        posOrdem(T->direito);
        printf("%d ", T->dado);
    }
}

// g) Altura de um no
int altura(No* T) {
    if (T == NULL) return -1;
    int a = altura(T->esquerdo);
    int b = altura(T->direito);
    return (a > b ? a : b) + 1;
}

// h) Profundidade de um no
int profundidade(No* T, int valor, int nivel) {
    if (T == NULL) return -1;
    if (T->dado == valor) return nivel;
    if (valor < T->dado)
        return profundidade(T->esquerdo, valor, nivel + 1);
    else
        return profundidade(T->direito, valor, nivel + 1);
}

// i) Soma dos valores armazenados na arvore
int somaValores(No* T) {
    if (T == NULL) return 0;
    return T->dado + somaValores(T->esquerdo) + somaValores(T->direito);
}

// j) Nivel de um no
int nivelDoNo(No* T, int valor) {
    return profundidade(T, valor, 0);
}

// k) Calcular o numero de nos
int contarNos(No* T) {
    if (T == NULL) return 0;
    return 1 + contarNos(T->esquerdo) + contarNos(T->direito);
}

// l) Calcular o numero de folhas
int contarFolhas(No* T) {
    if (T == NULL) return 0;
    if (T->esquerdo == NULL && T->direito == NULL) return 1;
    return contarFolhas(T->esquerdo) + contarFolhas(T->direito);
}

int main() {
    No* raiz = NULL;

    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 15);
    raiz = inserir(raiz, 3);
    raiz = inserir(raiz, 7);

    printf("In-ordem: ");
    inOrdem(raiz);
    printf("\n");

    printf("Pre-ordem: ");
    preOrdem(raiz);
    printf("\n");

    printf("Pos-ordem: ");
    posOrdem(raiz);
    printf("\n");

    printf("Altura: %d\n", altura(raiz));
    printf("Soma: %d\n", somaValores(raiz));
    printf("Numero de nos: %d\n", contarNos(raiz));
    printf("Numero de folhas: %d\n", contarFolhas(raiz));
    printf("Nivel do no 7: %d\n", nivelDoNo(raiz, 7));
    printf("Profundidade do no 7: %d\n", profundidade(raiz, 7, 0));

    removerArvore(raiz);
    return 0;
}