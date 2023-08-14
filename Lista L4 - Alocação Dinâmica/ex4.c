#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Biblioteca para manipulação de caracteres

/*Exercício 4. Um palíndromo é uma sequência de caracteres cuja leitura é idêntica se feita da direita para a
esquerda ou vice-versa. Por exemplo: OSSO é palíndromo; OVO também é palíndromo. Em textos mais
complexos os espaços e pontuações são ignorados. A frase “SUBI NO ONIBUS” é um exemplo de frase
palíndromo onde os espaços foram ignorados. Faça um programa que leia uma string, mostre-a e diga se é um
palíndromo ou não.*/

// Função para remover espaços e pontuações de uma string
void removerEspacosPontuacoes(char *str) {
    int i, j;
    for (i = 0, j = 0; i < strlen(str); i++) {
        if (!isspace(str[i]) && !ispunct(str[i])) { // Verifica se não é espaço nem pontuação
            str[j++] = str[i]; // Move o caractere para a nova posição
        }
    }
    str[j] = '\0'; // Adiciona o terminador de string
}

// Função para verificar se uma string é um palíndromo
int ehPalindromo(char *str) {
    int i, j;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (toupper(str[i]) != toupper(str[j])) { // Compara caracteres ignorando maiúsculas/minúsculas
            return 0; // Não é palíndromo
        }
    }
    return 1; // É palíndromo
}

int main() {
    char *str;
    str = (char *)malloc(100 * sizeof(char)); // Alocando memória para a string

    // Lendo a string
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0'; // Removendo o caractere de nova linha

    // Removendo espaços e pontuações da string
    removerEspacosPontuacoes(str);

    // Imprimindo a string original
    printf("%s\n", str);

    // Verificando se a string é um palíndromo
    if (ehPalindromo(str)) {
        printf("É palíndromo\n");
    } else {
        printf("Não é palíndromo\n");
    }

    // Liberando a memória alocada
    free(str);

    return 0;
}
