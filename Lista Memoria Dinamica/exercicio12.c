#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[51];
    int quantidade;
    float preco;
} Produto;

int main() {
    int n;
    scanf("%d", &n);
    Produto *produtos = (Produto *)malloc(n * sizeof(Produto));

    for (int i = 0; i < n; i++) {
        scanf("%d", &produtos[i].codigo);
        scanf(" %[^\n]", produtos[i].nome);
        scanf("%d", &produtos[i].quantidade);
        scanf("%f", &produtos[i].preco);
    }

    float totalEstoque = 0;
    for (int i = 0; i < n; i++) {
        totalEstoque += produtos[i].quantidade * produtos[i].preco;
    }
    printf("Valor total em estoque: %.2f\n", totalEstoque);

    int menor = 0, maior = 0;
    for (int i = 1; i < n; i++) {
        if (produtos[i].quantidade < produtos[menor].quantidade) menor = i;
        if (produtos[i].quantidade > produtos[maior].quantidade) maior = i;
    }

    printf("Produto com menor quantidade: %s (%d)\n", produtos[menor].nome, produtos[menor].quantidade);
    printf("Produto com maior quantidade: %s (%d)\n", produtos[maior].nome, produtos[maior].quantidade);

    free(produtos);
    return 0;
}





