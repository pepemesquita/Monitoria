#include <stdio.h>
#include <stdlib.h>

/*Exercício 7. Preencha por leitura uma matriz M(5,5). Em seguida, calcule e imprima a média dos elementos
das áreas assinaladas (tudo no mesmo programa!)
a) Elementos que não estão nas bordas
da matriz
b) Elementos acima da diagonal
principal
c) Elementos abaixo da diagonal*/

// Função para preencher a matriz por leitura
void preencherMatriz(int **matriz, int linhas, int colunas) {
    printf("Preencha a matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para calcular a média dos elementos da matriz
float calcularMedia(int **matriz, int linhas, int colunas, int *indicesI, int *indicesJ, int tamanho) {
    int soma = 0;
    for (int k = 0; k < tamanho; k++) {
        soma += matriz[indicesI[k]][indicesJ[k]];
    }
    return (float)soma / tamanho;
}

int main() {
    int linhas = 5;
    int colunas = 5;

    // Alocação dinâmica para a matriz 5x5
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // Preenchimento da matriz
    preencherMatriz(matriz, linhas, colunas);

    // a) Calcular a média dos elementos que não estão nas bordas da matriz
    int indicesI[] = {1, 1, 2, 2, 2, 3, 3, 3, 3};
    int indicesJ[] = {1, 2, 1, 2, 3, 1, 2, 3, 4};
    int tamanhoA = sizeof(indicesI) / sizeof(indicesI[0]);
    float mediaA = calcularMedia(matriz, linhas, colunas, indicesI, indicesJ, tamanhoA);
    printf("Média dos elementos que não estão nas bordas: %.2f\n", mediaA);

    // b) Calcular a média dos elementos acima da diagonal principal
    int tamanhoB = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = i + 1; j < colunas; j++) {
            tamanhoB++;
        }
    }
    int *indicesIb = (int *)malloc(tamanhoB * sizeof(int));
    int *indicesJb = (int *)malloc(tamanhoB * sizeof(int));
    int count = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = i + 1; j < colunas; j++) {
            indicesIb[count] = i;
            indicesJb[count] = j;
            count++;
        }
    }
    float mediaB = calcularMedia(matriz, linhas, colunas, indicesIb, indicesJb, tamanhoB);
    printf("Média dos elementos acima da diagonal principal: %.2f\n", mediaB);

    // c) Calcular a média dos elementos abaixo da diagonal principal
    int tamanhoC = 0;
    for (int i = 1; i < linhas; i++) {
        for (int j = 0; j < i; j++) {
            tamanhoC++;
        }
    }
    int *indicesIc = (int *)malloc(tamanhoC * sizeof(int));
    int *indicesJc = (int *)malloc(tamanhoC * sizeof(int));
    count = 0;
    for (int i = 1; i < linhas; i++) {
        for (int j = 0; j < i; j++) {
            indicesIc[count] = i;
            indicesJc[count] = j;
            count++;
        }
    }
    float mediaC = calcularMedia(matriz, linhas, colunas, indicesIc, indicesJc, tamanhoC);
    printf("Média dos elementos abaixo da diagonal principal: %.2f\n", mediaC);

    // Liberando a memória alocada
    free(indicesIb);
    free(indicesJb);
    free(indicesIc);
    free(indicesJc);
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
