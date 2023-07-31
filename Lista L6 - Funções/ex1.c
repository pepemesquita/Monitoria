#include <stdio.h>

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
