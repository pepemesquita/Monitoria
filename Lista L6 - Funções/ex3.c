#include <stdio.h>
// #define NUMERO_DE_QUESTOES 10;
/*Exercício 3. Faça um programa para corrigir testes de múltipla escolha. O programa deve ler um valor N que
indica o número de questões do teste e na sequência N caracteres (‘a’, ‘b’, ‘c’, ‘d’ ou ‘e’) indicando o gabarito
e mais N caracteres indicando as respostas de um aluno. O programa deve imprimir a quantidade e a
porcentagem de acertos do aluno. Utilize uma função para ler um vetor e outra função que corrige e devolve o
número de acertos.*/

// Protótipos das funções
void lerRespostas(char respostas[], int n);
int corrigirTeste(char gabarito[], char respostasAluno[], int n);

int main() {
    int n;
    printf("Digite o número de questões do teste: ");
    scanf("%d", &n);

    char gabarito[n];
    char respostasAluno[n];

    lerRespostas(gabarito, n);

    printf("Digite as respostas do aluno:\n");
    lerRespostas(respostasAluno, n);

    int acertos = corrigirTeste(gabarito, respostasAluno, n);
    double porcentagemAcertos = (acertos / (double)n) * 100.0;

    printf("Número de acertos: %d\n", acertos);
    printf("Porcentagem de acertos: %.2f%%\n", porcentagemAcertos);

    return 0;
}
// Função para ler um vetor de caracteres
void lerRespostas(char respostas[], int n) {
    printf("Digite as %d respostas (apenas 'a', 'b', 'c', 'd' ou 'e'):\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &respostas[i]);
    }
}
// Função para corrigir o teste e retornar o número de acertos
int corrigirTeste(char gabarito[], char respostas[], int n) {
    int acertos = 0;
    for (int i = 0; i < n; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }
    return acertos;
}