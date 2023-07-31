#include <stdio.h>

// Protótipos das funções
double calcularCosseno(double x);
int calcularFatorial(int n);

int main() {
    double x;
    double incremento = 0.1;
    double limite_superior = 6.3;

    for (x = 0; x <= limite_superior; x += incremento) {
        double cosseno_x = calcularCosseno(x);
        printf("x = %.1f, cosseno(x) = %.6f\n", x, cosseno_x);
    }

    return 0;
}

// Função para calcular o cosseno usando a série fornecida
double calcularCosseno(double x) {
    double cosseno = 1.0;
    double termo = 1.0;
    int n;

    for (n = 1; n <= 8; n++) {
        termo *= (x * x) / (2 * n * (2 * n - 1));
        if (n % 2 == 0) {
            cosseno -= termo;
        } else {
            cosseno += termo;
        }
    }

    return cosseno;
}

// Função para calcular o fatorial de um número inteiro
int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}
