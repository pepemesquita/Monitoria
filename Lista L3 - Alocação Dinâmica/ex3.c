#include <stdio.h>

/*Escreva um algoritmo de pesquisa sequencial que informe a posição em que se encontra o valor
a ser buscado (informado pelo usuário). Caso esse valor não seja encontrado, informe a posição -1. Inicialize
um vetor com 10 elementos para testar o algoritmo.
*/
int buscaSequencial(int *vetor, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i; // Retorna o índice onde o valor foi encontrado
        }
    }
    return -1; // Valor não encontrado
}

int main() {
    int tamanho = 10;
    int vetor[10] = {1, 5, 7, 10, 15, 20, 25, 30, 35, 40};
    int valorBusca;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &valorBusca);

    int posicao = buscaSequencial(vetor, tamanho, valorBusca);

    if (posicao != -1) {
        printf("O valor %d foi encontrado na posição %d.\n", valorBusca, posicao);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", valorBusca);
    }

    return 0;
}
