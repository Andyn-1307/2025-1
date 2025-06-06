#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[50];
    int matricula;
    float nota;
    struct Aluno* esquerdo;
    struct Aluno* direito;
} Aluno;

Aluno* criarAluno(const char* nome, int matricula, float nota) {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    if (novo != NULL) {
        strcpy(novo->nome, nome);
        novo->matricula = matricula;
        novo->nota = nota;
        novo->esquerdo = NULL;
        novo->direito = NULL;
    }
    return novo;
}

Aluno* inserirAluno(Aluno* raiz, const char* nome, int matricula, float nota) {
    if (raiz == NULL) {
        return criarAluno(nome, matricula, nota);
    }

    int cmp = strcmp(nome, raiz->nome);
    if (cmp < 0) {
        raiz->esquerdo = inserirAluno(raiz->esquerdo, nome, matricula, nota);
    } else if (cmp > 0) {
        raiz->direito = inserirAluno(raiz->direito, nome, matricula, nota);
    }

    return raiz;
}

Aluno* buscarAluno(Aluno* raiz, const char* nome) {
    if (raiz == NULL) return NULL;

    int cmp = strcmp(nome, raiz->nome);
    if (cmp == 0) {
        return raiz;
    } else if (cmp < 0) {
        return buscarAluno(raiz->esquerdo, nome);
    } else {
        return buscarAluno(raiz->direito, nome);
    }
}

void calcularMedia(Aluno* raiz, float* soma, int* total) {
    if (raiz != NULL) {
        *soma += raiz->nota;
        (*total)++;
        calcularMedia(raiz->esquerdo, soma, total);
        calcularMedia(raiz->direito, soma, total);
    }
}

float mediaNotas(Aluno* raiz) {
    float soma = 0;
    int total = 0;
    calcularMedia(raiz, &soma, &total);
    if (total == 0) return 0;
    return soma / total;
}

void liberarArvore(Aluno* raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->esquerdo);
        liberarArvore(raiz->direito);
        free(raiz);
    }
}

int main() {
    Aluno* raiz = NULL;

    raiz = inserirAluno(raiz, "Carlos", 123, 7.8);
    raiz = inserirAluno(raiz, "Ana", 101, 9.2);
    raiz = inserirAluno(raiz, "Bruno", 112, 6.5);
    raiz = inserirAluno(raiz, "Daniela", 131, 8.4);

    const char* nomeBusca = "Ana";
    Aluno* encontrado = buscarAluno(raiz, nomeBusca);
    if (encontrado) {
        printf("\nAluno encontrado: %s | Matricula: %d | Nota: %.2f\n",
            encontrado->nome, encontrado->matricula, encontrado->nota);
    } else {
        printf("\nAluno %s nao encontrado.\n", nomeBusca);
    }

    printf("\nMedia das notas: %.2f\n", mediaNotas(raiz));

    liberarArvore(raiz);
    return 0;
}