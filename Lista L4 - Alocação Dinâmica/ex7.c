#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Exercício 7. O CPF (Cadastro de Pessoa Física) é um documento brasileiro emitido pela Secretaria da
Receita Federal do Ministério da Fazenda. Seu número é composto por 11 dígitos, sendo os dois últimos os
dígitos verificadores, que atestam se o número do CPF é válido. Os dois últimos dígitos verificadores são
calculados a partir dos nove primeiros dígitos.*/

// Função para verificar se um CPF é válido
int verificarCPF(char *cpf) {
    int soma = 0;

    // Calcula o primeiro dígito verificador
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }

    int primeiroDigito = 11 - (soma % 11);
    if (primeiroDigito > 9) {
        primeiroDigito = 0;
    }

    // Calcula o segundo dígito verificador
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }

    int segundoDigito = 11 - (soma % 11);
    if (segundoDigito > 9) {
        segundoDigito = 0;
    }

    // Verifica se os dígitos verificadores são iguais aos dois últimos dígitos do CPF
    if ((cpf[9] - '0' == primeiroDigito) && (cpf[10] - '0' == segundoDigito)) {
        return 1; // CPF válido
    } else {
        return 0; // CPF inválido
    }
}

int main() {
    char *cpf;
    cpf = (char *)malloc(12 * sizeof(char)); // Alocando memória para o CPF

    // Lendo o CPF
    printf("Digite um CPF (apenas números): ");
    fgets(cpf, 12, stdin);
    cpf[strlen(cpf) - 1] = '\0'; // Removendo o caractere de nova linha

    // Verificando se o CPF é válido e imprimindo o resultado
    if (verificarCPF(cpf)) {
        printf("CPF válido\n");
    } else {
        printf("CPF inválido\n");
    }

    // Liberando a memória alocada
    free(cpf);

    return 0;
}
