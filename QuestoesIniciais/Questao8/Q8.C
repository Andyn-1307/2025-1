#include <stdio.h>
#include <string.h>

typedef struct produto
{
    char nome[50];
    float preco;
    int quantidade, codigo;
};

#define MAX_PRODUTOS 100

int main (){
    int i, n, j, count = 0, opcao;
    produto produtos[MAX_PRODUTOS];
    do
    {
        printf("Menu:\n");
        printf("1 - Cadastrar produtos\n");
        printf("2 - Listar produtos\n");
        printf("3 - Buscar produto\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            if (n < MAX_PRODUTOS) {
                printf("Digite o nome do produto %d: ", i + 1);
                scanf("%[^\n]", produtos[i].nome);
                printf("Digite o preco do produto %d: ", i + 1);
                scanf("%f", &produtos[i].preco);
                printf("Digite a quantidade do produto %d: ", i + 1);
                scanf("%d", &produtos[i].quantidade);
                printf("Digite o codigo do produto %d: ", i + 1);
                scanf("%d", &produtos[i].codigo);
                n++;
            } else {
                printf("Nenhum produto cadastrado.\n");
            }
        }
        else if (opcao == 2) {
            int cod, encontrado = 0;
            printf("Digite o codigo do produto a ser listado: ");
            scanf("%d", &cod);
            for ( i = 0; i < n; i++)
            {
                if (produtos[i].codigo == cod) {
                    printf("Produto encontrado: Nome: %s, Preco: %.2f, Quantidade: %d, Codigo: %d\n", produtos[i].nome, produtos[i].preco, produtos[i].quantidade, produtos[i].codigo);
                    encontrado = 1;
                    break;
                }
            }
            if(!encontrado) {
                printf("Produto nao encontrado.\n");
            }
        } else if (opcao == 3) {
            printf("Lista de produtos:\n");
            for (i = 0; i < n; i++) {
                printf("Produto %d: Nome: %s, Preco: %.2f, Quantidade: %d, Codigo: %d\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidade, produtos[i].codigo);
            }
            if (n == 0) {
                printf("Nenhum produto cadastrado.\n");
            }
        }
        else if (opcao != 0) {
            printf("Opcao invalida. Tente novamente.\n");
        }
        

    } while (opcao != 0);    

    printf("Saindo do programa.\n");

    return 0;
}