#include <stdio.h>
#include <stdlib.h>


/*Exercício 6. Declare uma matriz M(4, 4), de tipo inteiro. Sobre essa matriz efetue as seguintes operações
(tudo no mesmo programa!):
d) Preencha por leitura;
e) Imprima o conteúdo na forma de uma matriz;
f) Troque a primeira linha da matriz com a primeira coluna e imprima novamente;
g) Imprima os elementos da diagonal principal;
h) Zere a segunda coluna da matriz e imprima a matriz novamente;
i) Leia um valor do teclado e multiplique todos os elementos da matriz por esse valor. Em
seguida, imprima a matriz novamente.
*/


int main() {
    int **matriz; // Ponteiro para armazenar a matriz
    int valor;

    // Alocação dinâmica de memória para a matriz 4x4
    matriz = (int **)malloc(4 * sizeof(int *));
    for (int i = 0; i < 4; i++) {
        matriz[i] = (int *)malloc(4 * sizeof(int));
    }

    // d) Preencha por leitura
    printf("Preencha a matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // e) Imprima o conteúdo na forma de uma matriz
    printf("Matriz original:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // f) Troque a primeira linha da matriz com a primeira coluna e imprima novamente
    for (int i = 0; i < 4; i++) {
        int temp = matriz[0][i];
        matriz[0][i] = matriz[i][0];
        matriz[i][0] = temp;
    }
    printf("\nMatriz após trocar primeira linha com primeira coluna:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // g) Imprima os elementos da diagonal principal
    printf("\nElementos da diagonal principal:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t", matriz[i][i]);
    }
    printf("\n");

    // h) Zere a segunda coluna da matriz e imprima a matriz novamente
    for (int i = 0; i < 4; i++) {
        matriz[i][1] = 0;
    }
    printf("\nMatriz após zerar a segunda coluna:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // i) Leia um valor do teclado e multiplique todos os elementos da matriz por esse valor
    printf("\nDigite um valor para multiplicação: ");
    scanf("%d", &valor);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] *= valor;
        }
    }
    printf("\nMatriz após multiplicação:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberando a memória alocada
    for (int i = 0; i < 4; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
