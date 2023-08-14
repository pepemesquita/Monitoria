#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Biblioteca para manipulação de caracteres

/*Exercício 3. Faça um programa que leia um texto de até 80 caracteres. O programa deve substituir todas as
letras minúsculas do texto por letras maiúsculas. Dica: pesquisa sobre a tabela ASCII*/

// Função para converter letras minúsculas para maiúsculas no texto
void converterMaiusculas(char *texto) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (islower(texto[i])) { // Verifica se o caractere é minúsculo
            texto[i] = toupper(texto[i]); // Converte para maiúsculo
        }
    }
}

int main() {
    char *texto;
    texto = (char *)malloc(80 * sizeof(char)); // Alocando memória para o texto

    // Lendo o texto
    printf("Digite um texto de até 80 caracteres: ");
    fgets(texto, 80, stdin);
    texto[strlen(texto) - 1] = '\0'; // Removendo o caractere de nova linha

    // Chamando a função para converter letras minúsculas em maiúsculas
    converterMaiusculas(texto);

    // Imprimindo o texto convertido
    printf("%s\n", texto);

    // Liberando a memória alocada
    free(texto);

    return 0;
}
