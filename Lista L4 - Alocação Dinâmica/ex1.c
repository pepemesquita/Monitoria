#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Exercício 1. Faça um programa que leia duas strings e informe o conteúdo delas seguido do seu
comprimento. Informe também se as duas strings possuem o mesmo comprimento e se são iguais ou diferentes
no conteúdo.*/

// Função para comparar duas strings e verificar se são iguais
int saoIguais(char *str1, char *str2) {
    return strcmp(str1, str2) == 0;
}

int main() {
    char *str1, *str2;
    int len1, len2;

    // Alocando memória para as strings
    str1 = (char *)malloc(100 * sizeof(char));
    str2 = (char *)malloc(100 * sizeof(char));

    // Lendo as strings
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    // Calculando os comprimentos das strings
    len1 = strlen(str1);
    len2 = strlen(str2);

    // Imprimindo as strings e seus comprimentos
    printf("%s: %d caracteres\n", str1, len1);
    printf("%s: %d caracteres\n", str2, len2);

    // Verificando se as strings possuem o mesmo comprimento
    if (len1 == len2) {
        printf("As duas strings são de tamanhos iguais\n");
    } else {
        printf("As duas strings são de tamanhos diferentes\n");
    }

    // Verificando se as strings são iguais no conteúdo
    if (saoIguais(str1, str2)) {
        printf("As duas strings possuem conteúdo igual\n");
    } else {
        printf("As duas strings possuem conteúdo diferente\n");
    }

    // Liberando a memória alocada
    free(str1);
    free(str2);

    return 0;
}
