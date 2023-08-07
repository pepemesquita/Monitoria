#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BinaryNumber {
    char bits[9]; // Vetor de char para representar um número binário de 8 bits
};

void readBinary(struct BinaryNumber *num) {
    printf("Digite um número binário de 8 bits: ");
    scanf("%s", num->bits);
    num->bits[8] = '\0'; // Garantir que a string seja terminada corretamente
}

void printBinary(struct BinaryNumber num) {
    printf("Número binário: %s\n", num.bits);
}

void performOR(struct BinaryNumber num1, struct BinaryNumber num2, struct BinaryNumber *result) {
    for (int i = 0; i < 8; i++) {
        result->bits[i] = (num1.bits[i] == '1' || num2.bits[i] == '1') ? '1' : '0';
    }
    result->bits[8] = '\0';
}

void performAND(struct BinaryNumber num1, struct BinaryNumber num2, struct BinaryNumber *result) {
    for (int i = 0; i < 8; i++) {
        result->bits[i] = (num1.bits[i] == '1' && num2.bits[i] == '1') ? '1' : '0';
    }
    result->bits[8] = '\0';
}

int binaryToInt(struct BinaryNumber num) {
    return strtol(num.bits, NULL, 2);
}

void performSum(struct BinaryNumber num1, struct BinaryNumber num2, struct BinaryNumber *result, int *overflow) {
    int carry = 0;
    for (int i = 7; i >= 0; i--) {
        int sum = (num1.bits[i] - '0') + (num2.bits[i] - '0') + carry;
        result->bits[i] = (sum % 2) + '0';
        carry = sum / 2;
    }
    result->bits[8] = '\0';
    *overflow = carry;
}

int main() {
    struct BinaryNumber num1, num2, result;
    int overflow;

    readBinary(&num1);
    readBinary(&num2);

    // Realizar operações
    performOR(num1, num2, &result);
    printf("Operação OR: ");
    printBinary(result);

    performAND(num1, num2, &result);
    printf("Operação AND: ");
    printBinary(result);

    printf("Conversão do primeiro número para inteiro: %d\n", binaryToInt(num1));

    performSum(num1, num2, &result, &overflow);
    printf("Soma dos dois binários: ");
    printBinary(result);
    if (overflow) {
        printf("Ocorreu overflow na soma.\n");
    }

    return 0;
}
