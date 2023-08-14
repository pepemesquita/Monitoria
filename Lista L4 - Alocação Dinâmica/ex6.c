#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Biblioteca para manipulação de caracteres

/*Exercício 6. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de
substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um
número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se
tornaria ‘E’, e assim por diante. Desenvolva um programa que faça uso desse Código de César (3 posições),
entre com uma string e retorne a string codificada.*/

// Função para aplicar o Código de César em uma string
void codigoCesar(char *str, int deslocamento) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { // Verifica se o caractere é uma letra
            char base = isupper(str[i]) ? 'A' : 'a'; // Determina a base para maiúsculas ou minúsculas
            str[i] = (str[i] - base + deslocamento) % 26 + base; // Aplica a substituição
        }
    }
}

int main() {
    char *str;
    int deslocamento = 3; // Número de posições para deslocamento

    str = (char *)malloc(100 * sizeof(char)); // Alocando memória para a string

    // Lendo a string
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0'; // Removendo o caractere de nova linha

    // Chamando a função para aplicar o Código de César
    codigoCesar(str, deslocamento);

    // Imprimindo a nova string codificada
    printf("Nova string: %s\n", str);

    // Liberando a memória alocada
    free(str);

    return 0;
}
