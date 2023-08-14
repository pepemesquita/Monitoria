#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Exercício 2. Faça um programa que leia um texto de até 80 caracteres. O programa deve imprimir na tela as
palavras uma por linha*/

// Função para imprimir palavras de um texto separadamente
void imprimirPalavras(char *texto) {
    char *palavra;
    palavra = strtok(texto, " "); // Divide o texto em palavras usando o espaço como delimitador

    while (palavra != NULL) {
        printf("%s\n", palavra); // Imprime a palavra atual
        palavra = strtok(NULL, " "); // Move para a próxima palavra
    }
}

int main() {
    char *texto;
    texto = (char *)malloc(80 * sizeof(char)); // Alocando memória para o texto

    // Lendo o texto
    printf("Digite um texto de até 80 caracteres: ");
    fgets(texto, 80, stdin);
    texto[strlen(texto) - 1] = '\0'; // Removendo o caractere de nova linha

    // Chamando a função para imprimir palavras separadamente
    imprimirPalavras(texto);

    // Liberando a memória alocada
    free(texto);

    return 0;
}
