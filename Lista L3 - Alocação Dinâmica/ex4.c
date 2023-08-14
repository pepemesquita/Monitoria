#include <stdio.h>
#include <stdlib.h>
/*Faça um programa para o controle de estoque de uma loja. A loja vende 15 produtos diferentes.
O programa deve iniciar lendo os códigos de cada um desses produtos e a quantidade de itens dos mesmos
existente no estoque da loja, armazenando esses valores em dois arranjos, um para os códigos e outro para as
quantidades de itens (mesmos índices nos dois arranjos devem corresponder ao mesmo produto). No final do
processo, o programa deve fazer uma análise do estoque que restou na loja, informando:

a) Códigos dos produtos que estão com estoque inferior a 10 unidades;
b) Número de produtos que apresentam estoque entre 10 e 20 unidades (inclusive); e
c) Número total de itens em estoque para cada produto.*/

int main() {
    int numProdutos = 15;
    int *codigos = (int *)malloc(numProdutos * sizeof(int));
    int *quantidades = (int *)malloc(numProdutos * sizeof(int));

    printf("Informe os códigos e as quantidades dos produtos:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Código do produto %d: ", i + 1);
        scanf("%d", &codigos[i]);

        printf("Quantidade do produto %d: ", i + 1);
        scanf("%d", &quantidades[i]);
    }

    int abaixo10 = 0;
    int entre10e20 = 0;
    int totalItens = 0;

    for (int i = 0; i < numProdutos; i++) {
        if (quantidades[i] < 10) {
            abaixo10++;
        } else if (quantidades[i] >= 10 && quantidades[i] <= 20) {
            entre10e20++;
        }
        totalItens += quantidades[i];
    }

    printf("Produtos com estoque inferior a 10 unidades: %d\n", abaixo10);
    printf("Produtos com estoque entre 10 e 20 unidades: %d\n", entre10e20);
    printf("Total de itens em estoque: %d\n", totalItens);
}
