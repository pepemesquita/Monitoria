#include <stdio.h>
#include <stdlib.h>

/*Exercício 1. Seja um vetor inteiro de nove elementos. Escreva um programa que realize a seguinte
sequência de ações, na ordem indicada:
a) Preenchimento do vetor por leitura, sendo aceitos para armazenamento apenas valores
positivos, maiores que zero;
b) Impressão dos elementos do vetor em uma linha, usando dois espaços em branco para separar
os valores de cada elemento;
c) Rotação dos elementos do vetor, com o deslocamento de todos os valores dos elementos para a
posição seguinte, exceto o último valor, que deve ser colocado na posição do primeiro
elemento;
d) Repetição do item b;
e) Soma do índice de cada elemento ao conteúdo da posição correspondente;
f) Repetição do item b;
g) Leitura de um valor inteiro. Determinação e apresentação do número de ocorrências desse
valor no vetor.*/


void preencherVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        do {
            printf("Digite um valor positivo para o elemento %d: ", i);
            scanf("%d", &vetor[i]);
        } while (vetor[i] <= 0);
    }
}

void imprimirVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%2d  ", vetor[i]);
    }
    printf("\n");
}

void rotacionarVetor(int *vetor, int tamanho) {
    int temp = vetor[tamanho - 1];
    for (int i = tamanho - 1; i > 0; i--) {
        vetor[i] = vetor[i - 1];
    }
    vetor[0] = temp;
}

void somarIndice(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] += i;
    }
}

int contarOcorrencias(int *vetor, int tamanho, int valor) {
    int count = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            count++;
        }
    }
    return count;
}

int main() {
    int tamanho = 9;
    int *vetor = (int *)malloc(tamanho * sizeof(int));

    preencherVetor(vetor, tamanho);

    printf("Vetor preenchido: ");
    imprimirVetor(vetor, tamanho);

    rotacionarVetor(vetor, tamanho);
    printf("Vetor após rotação: ");
    imprimirVetor(vetor, tamanho);

    somarIndice(vetor, tamanho);
    printf("Vetor após soma de índices: ");
    imprimirVetor(vetor, tamanho);

    int valorBusca;
    printf("Digite um valor para busca: ");
    scanf("%d", &valorBusca);
    int ocorrencias = contarOcorrencias(vetor, tamanho, valorBusca);
    printf("O valor %d ocorre %d vezes no vetor.\n", valorBusca, ocorrencias);

    free(vetor);
    return 0;
}
