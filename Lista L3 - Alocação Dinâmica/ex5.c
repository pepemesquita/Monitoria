#include <stdio.h>
#include <stdlib.h>

/*Um dado é lançado 50 vezes, sendo anotado o valor correspondente a cada jogada. Faça um
programa para:
a) Transferir todos os valores anotados para a memória;
b) Determinar e imprimir o número de lançamentos nos quais o resultado obtido é maior do que a
média aritmética dos 50 lançamentos;
c) Determinar a porcentagem de ocorrências da face de seis do dado.
*/

int main() {
    int *lancamentos; // Ponteiro para armazenar os lançamentos
    int totalLancamentos = 50; // Total de lançamentos
    float media = 0; // Variável para a média
    int acimaMedia = 0; // Contador de lançamentos acima da média
    int ocorrenciasSeis = 0; // Contador de ocorrências da face seis

    // Alocação dinâmica de memória para armazenar os lançamentos
    lancamentos = (int *)malloc(totalLancamentos * sizeof(int));

    // a) Transferir todos os valores anotados para a memória
    printf("Digite os valores dos lançamentos:\n");
    for (int i = 0; i < totalLancamentos; i++) {
        scanf("%d", &lancamentos[i]);
        media += lancamentos[i]; // Acumulando valores para calcular a média posteriormente
        if (lancamentos[i] > 6) { // b) Contagem de valores acima da média
            acimaMedia++;
        }
        if (lancamentos[i] == 6) { // c) Contagem de ocorrências da face seis
            ocorrenciasSeis++;
        }
    }
    media /= totalLancamentos; // Calculando a média

    printf("Número de lançamentos com valor acima da média: %d\n", acimaMedia);
    printf("Porcentagem de ocorrências da face seis: %.2f%%\n", (float)ocorrenciasSeis * 100 / totalLancamentos);

    // Liberando a memória alocada
    free(lancamentos);

    return 0;
}
