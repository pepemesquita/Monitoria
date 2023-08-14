#include <stdio.h>
#include <stdlib.h>

/*Exercício 8. A transposta de uma matriz é definida trocando-se, ordenadamente, suas linhas por suas
colunas, conforme mostrado no exemplo abaixo:
Matriz A
1 4
2 5
3 6
Matriz T (transposta de A)
1 2 3
4 5 6
d) Preencha por leitura uma matriz A(10,20);
e) Obtenha a matriz transposta de A, chamando a transposta de matriz T;
f) Imprima o conteúdo de T na forma de uma matriz; */

// Função para preencher a matriz por leitura
void preencherMatriz(int **matriz, int linhas, int colunas) {
    printf("Preencha a matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]); // Lê o valor e armazena na matriz
        }
    }
}

// Função para calcular a matriz transposta
void matrizTransposta(int **matriz, int **transposta, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j]; // Troca linhas por colunas
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]); // Imprime o valor na matriz
        }
        printf("\n");
    }
}

int main() {
    int linhas = 10;
    int colunas = 20;

    // Alocação dinâmica da matriz A
    int **matrizA = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matrizA[i] = (int *)malloc(colunas * sizeof(int)); // Aloca uma linha da matriz A
    }

    // Alocação dinâmica da matriz transposta T
    int **matrizT = (int **)malloc(colunas * sizeof(int *));
    for (int i = 0; i < colunas; i++) {
        matrizT[i] = (int *)malloc(linhas * sizeof(int)); // Aloca uma linha da matriz T
    }

    // Preenchimento da matriz A por leitura
    preencherMatriz(matrizA, linhas, colunas);

    // Cálculo da matriz transposta T
    matrizTransposta(matrizA, matrizT, linhas, colunas);

    // Impressão da matriz transposta T
    printf("Matriz transposta T:\n");
    imprimirMatriz(matrizT, colunas, linhas);

    // Liberação da memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matrizA[i]); // Libera a memória de cada linha da matriz A
    }
    free(matrizA); // Libera a memória da matriz A

    for (int i = 0; i < colunas; i++) {
        free(matrizT[i]); // Libera a memória de cada linha da matriz T
    }
    free(matrizT); // Libera a memória da matriz T

    return 0;
}
