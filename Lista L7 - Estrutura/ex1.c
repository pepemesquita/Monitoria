#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para o número binário de 8 bits
struct NumeroBinario {
    char binario[9]; // Aumentado para 9 para acomodar o caractere nulo '\0'
};

//Protótipos das funções
struct NumeroBinario operacaoOR(struct NumeroBinario num1, struct NumeroBinario num2);
struct NumeroBinario operacaoAND(struct NumeroBinario num1, struct NumeroBinario num2);
int binarioParaInteiro(struct NumeroBinario num);

int main() {
    struct NumeroBinario numero1, numero2;

    // Leitura dos números binários
    printf("Digite o primeiro número binário de 8 bits: ");
    scanf("%s", numero1.binario);

    printf("Digite o segundo número binário de 8 bits: ");
    scanf("%s", numero2.binario);

    // Operação OR
    struct NumeroBinario resultadoOR = operacaoOR(numero1, numero2);
    printf("Resultado da operação OR: %s\n", resultadoOR.binario);

    // Operação AND
    struct NumeroBinario resultadoAND = operacaoAND(numero1, numero2);
    printf("Resultado da operação AND: %s\n", resultadoAND.binario);

    // Conversão do primeiro número binário para inteiro
    int inteiroNumero1 = binarioParaInteiro(numero1);
    printf("Conversão do primeiro número binário para inteiro: %d\n", inteiroNumero1);

    // Soma dos números binários com detecção de overflow
    int soma = inteiroNumero1 + binarioParaInteiro(numero2);
    printf("Soma dos números binários: %d\n", soma);

    // Verificação de overflow
    if (soma > 255) {
        printf("Ocorreu um overflow na soma.\n");
    }

    return 0;
}

// Função para realizar a operação OR entre dois números binários
struct NumeroBinario operacaoOR(struct NumeroBinario num1, struct NumeroBinario num2) {
    struct NumeroBinario resultado;
    for (int i = 0; i < 8; i++) {
        resultado.binario[i] = (num1.binario[i] == '1' || num2.binario[i] == '1') ? '1' : '0';
    }
    resultado.binario[8] = '\0'; // Adicionando o caractere nulo no final da string
    return resultado;
}

// Função para realizar a operação AND entre dois números binários
struct NumeroBinario operacaoAND(struct NumeroBinario num1, struct NumeroBinario num2) {
    struct NumeroBinario resultado;
    for (int i = 0; i < 8; i++) {
        resultado.binario[i] = (num1.binario[i] == '1' && num2.binario[i] == '1') ? '1' : '0';
    }
    resultado.binario[8] = '\0'; // Adicionando o caractere nulo no final da string
    return resultado;
}

// Função para converter um número binário para inteiro
int binarioParaInteiro(struct NumeroBinario num) {
    return strtol(num.binario, NULL, 2);
}