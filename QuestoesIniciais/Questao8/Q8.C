#include <stdio.h>
#include <string.h>

// Definindo a estrutura produto
typedef struct
{
    char nome[50];
    float preco;
    int quantidade, codigo;
} produto;

// Definindo o tamanho máximo do vetor de produtos
#define MAX_PRODUTOS 100

int main() {
    int i, n = 0, opcao;
    produto produtos[MAX_PRODUTOS];
    // Inicializando o vetor de produtos

    do {
        // Exibindo o menu de opções
        printf("Menu:\n");
        printf("1 - Cadastrar produtos\n");
        printf("2 - Listar produtos\n");
        printf("3 - Buscar produto\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // usado para limpar o buffer de entrada. Isso é necessário porque funções como scanf não consomem o caractere de nova linha (\n)

        if (opcao == 1) {
            if (n < MAX_PRODUTOS) {
                printf("Digite o nome do produto %d: ", n + 1);
                fgets(produtos[n].nome, sizeof(produtos[n].nome), stdin);
                produtos[n].nome[strcspn(produtos[n].nome, "\n")] = '\0';

                printf("Digite o preco do produto %d: ", n + 1);
                scanf("%f", &produtos[n].preco);
                printf("Digite a quantidade do produto %d: ", n + 1);
                scanf("%d", &produtos[n].quantidade);
                printf("Digite o codigo do produto %d: ", n + 1);
                scanf("%d", &produtos[n].codigo);
                getchar();

                n++;
            } else {
                printf("Limite de produtos atingido.\n");
            }
        // Exibir mensagem se o limite de produtos for atingido    

        } else if (opcao == 2) {
            // Listar os produtos cadastrados
            if (n == 0) {
                printf("Nenhum produto cadastrado.\n");
            } else {
                printf("Lista de produtos:\n");
                for (i = 0; i < n; i++) {
                    // Exibir os detalhes de cada produto
                    printf("Produto %d: Nome: %s, Preco: %.2f, Quantidade: %d, Codigo: %d\n",
                           i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidade, produtos[i].codigo);
                }
            }
        } else if (opcao == 3) {
            int cod, encontrado = 0;
            printf("Digite o codigo do produto a ser buscado: ");
            scanf("%d", &cod);
            getchar(); // Consumir o '\n' deixado no buffer pelo scanf
            // Buscar o produto pelo código
            for (i = 0; i < n; i++) {
                if (produtos[i].codigo == cod) {
                    printf("Produto encontrado: Nome: %s, Preco: %.2f, Quantidade: %d, Codigo: %d\n",
                           produtos[i].nome, produtos[i].preco, produtos[i].quantidade, produtos[i].codigo);
                    encontrado = 1;
                    break;
                }
            }
            // Se o produto não for encontrado, exibir mensagem
            if (!encontrado) {
                printf("Produto nao encontrado.\n");
            }
           // Exibir mensagem se o código for inválido 
        } else if (opcao != 0) {
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Saindo do programa.\n");

    return 0;
}