#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Exercício 5. Faça um programa que leia um texto de até 80 caracteres e uma palavra de até 20 caracteres. O
programa deve informar se a palavra está dentro do texto e qual a posição que ela inicia.*/

// Função para verificar se uma palavra está presente em um texto e retornar a posição inicial
int encontrarPalavra(char *texto, char *palavra) {
    char *posicao = strstr(texto, palavra); // Busca a primeira ocorrência da palavra no texto

    if (posicao != NULL) {
        return posicao - texto + 1; // Calcula a posição inicial
    } else {
        return -1; // Retorna -1 se a palavra não for encontrada
    }
}

int main() {
    char *texto, *palavra;
    texto = (char *)malloc(80 * sizeof(char)); // Alocando memória para o texto
    palavra = (char *)malloc(20 * sizeof(char)); // Alocando memória para a palavra

    // Lendo o texto e a palavra
    printf("Digite um texto de até 80 caracteres: ");
    fgets(texto, 80, stdin);
    texto[strlen(texto) - 1] = '\0'; // Removendo o caractere de nova linha
    printf("Digite uma palavra de até 20 caracteres: ");
    fgets(palavra, 20, stdin);
    palavra[strlen(palavra) - 1] = '\0'; // Removendo o caractere de nova linha

    // Chamando a função para verificar a posição da palavra no texto
    int posicao = encontrarPalavra(texto, palavra);

    // Verificando o resultado da função e imprimindo
    if (posicao != -1) {
        printf("A palavra %s inicia na posicao %d\n", palavra, posicao);
    } else {
        printf("A palavra %s nao foi encontrada no texto\n", palavra);
    }

    // Liberando a memória alocada
    free(texto);
    free(palavra);

    return 0;
}
