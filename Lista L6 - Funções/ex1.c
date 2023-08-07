#include <stdio.h>

/*Exercício 1. Construa um programa que preencha um vetor por leitura e escreva o maior valor no vetor. Pelo
menos duas funções devem ser utilizadas: uma que realiza o preenchimento do vetor por leitura e outra que
devolve o maior valor contido no vetor.*/

// Protótipos das funções
void preencherVetor(int vetor[], int tamanho);
int encontrarMaiorValor(int vetor[], int tamanho);

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    preencherVetor(vetor, tamanho);

    int maiorValor = encontrarMaiorValor(vetor, tamanho);
    printf("O maior valor no vetor é: %d\n", maiorValor);

    return 0;
}

// Função para preencher o vetor por leitura
void preencherVetor(int vetor[], int tamanho) {
    printf("Digite %d valores para preencher o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

// Função para encontrar o maior valor no vetor
int encontrarMaiorValor(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}