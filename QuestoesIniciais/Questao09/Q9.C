#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char telefone[15];
    char email[50];
} Contato;

#define MAX_CONTATOS 100

int main(){
    Contato contatos[MAX_CONTATOS];
    int n = 0, i, opcao;

    do {
        printf("Menu:\n");
        printf("1 - Cadastrar contato\n");
        printf("2 - Listar contatos\n");
        printf("3 - Buscar contato\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (n < MAX_CONTATOS)
            {
                printf("Digite o nome do contato: ");
                scanf(" %[^\n]", contatos[n].nome); // Lê o nome do contato
                printf("Digite o telefone do contato: ");
                scanf(" %[^\n]", contatos[n].telefone); // Lê o telefone do contato
                printf("Digite o email do contato: ");
                scanf(" %[^\n]", contatos[n].email); // Lê o email do contato
                n++;
            } else {
                printf("Nenhum contato cadastrado.\n");
            }
        } else if (opcao == 2) {
            char busca[50];
            int encontrado = 0;
            printf("Digite o nome do contato a ser buscado: ");
            scanf(" %[^\n]", busca);

            for (i = 0; i < n; i++) {
                if (strcmp(contatos[i].nome, busca) == 0) {
                    printf("Contato encontrado: Nome: %s, Telefone: %s, Email: %s\n",
                           contatos[i].nome, contatos[i].telefone, contatos[i].email);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Contato nao encontrado.\n");
            }
        } else if (opcao == 3) {
            // Listar todos os contatos cadastrados
            if (n == 0) {
                printf("Nenhum contato cadastrado.\n");
            } else {
                printf("Lista de contatos:\n");
                for (i = 0; i < n; i++) {
                    printf("Contato %d: Nome: %s, Telefone: %s, Email: %s\n",
                           i + 1, contatos[i].nome, contatos[i].telefone, contatos[i].email);
                }
            }
        } else if (opcao != 0) {
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    printf("Saindo do programa.\n");
    return 0;
}