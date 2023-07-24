#include <stdio.h>

/*
Exercício 2. Assumindo que pulo[ ] é um vetor tipo int, 
quais das seguintes
expressões referenciam o valor
do terceiro elemento do vetor?

a) *(pulo + 2)
[valor1, valor2, valor3, valor5, valor5]
[  0   ,   1   ,   2   ,   3   ,   4   ]
  pulo   pulo+1  pulo+2
                                            */
int main(){

    int pulo [5] = {1, 2, 3, 4, 5};

    printf("%d", *(pulo + 2));

}

/*
b) *(pulo + 4)
[valor1, valor2, valor3, valor5, valor5]
[  0   ,   1   ,   2   ,   3   ,   4   ]
                                  Aqui

c) pulo + 4

Se o endereço fosse 1000, passaria a ser 1016.

d) pulo + 2

A mesma coisa só que seria 1008.
*/



