#include <stdio.h>

/*Exercício 3. Suponha as seguintes declarações de variáveis:
int mat[4], *p, x;
Quais expressões são válidas? Justifique:
a) p = mat + 1
b) p = mat++;
c) p = ++mat;
d) x = (*mat)++;
*/

int main(){
    int mat[5] = {1, 2, 3, 4, 5};
    int *p, x;

    p = mat + 1;
    printf("%d %d\n", mat, p);

    //p = mat++;
    //printf("%p %p", &mat, p);

    //p = ++mat;

    x = (*mat)++;
    printf("%d", x);    
}