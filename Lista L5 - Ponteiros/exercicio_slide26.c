#include <stdio.h>


int main(){
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    /*Qual é o valor das seguintes expressões
    
    a) p == &i 
    Verdadeiro, ambos tem o mesmo endereço

    b) *p - *q
    3 - 5 = -2

    c) **&p
    (&p)
    *(&p)
    *(*(&p))
    3

    d) 3 * - *p/(*q) + 7 
    3 * -3 / 5 + 7
    -9 / 5 + 7
    -1.8 + 7
    5.2 
    
    */
}