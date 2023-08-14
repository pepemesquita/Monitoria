#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que preencha, por leitura, com valores reais, dois vetores a e b, ambos de
oito elementos, e realize a troca dos elementos desses vetores. Após a execução do programa, o vetor b deverá
conter os valores fornecidos para o vetor a e vice-versa.
*/

void trocarVetores(float *vetorA, float *vetorB, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        float temp = vetorA[i];
        vetorA[i] = vetorB[i];
        vetorB[i] = temp;
    }
}

int main() {
    int tamanho = 8;
    float *vetorA = (float *)malloc(tamanho * sizeof(float));
    float *vetorB = (float *)malloc(tamanho * sizeof(float));

    printf("Preencha o vetor A com %d valores reais:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetorA[i]);
    }

    printf("Preencha o vetor B com %d valores reais:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetorB[i]);
    }

    trocarVetores(vetorA, vetorB, tamanho);

    printf("Vetor A após a troca: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f  ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B após a troca: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f  ", vetorB[i]);
    }
    printf("\n");

    free(vetorA);
    free(vetorB);
    return 0;
}
