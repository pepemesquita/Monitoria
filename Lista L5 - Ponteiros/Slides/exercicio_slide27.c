#include <stdio.h>

/*Qual será a saída deeste programa 
supondo que i ocupa o endereço 1000
na memória?*/


int main(){
    int i = 5, *p;
    p = &i;

    printf("%p %d %d %d %d\n", p, *p + 2, **&p, 3 * *p, **&p + 4);
}

/*A saída será...
1000(Endereço), 5 + 2 = 7, 5, 3 * 5 = 15, 5 + 4 = 9

*/