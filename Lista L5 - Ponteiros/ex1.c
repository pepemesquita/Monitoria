#include<stdio.h>

/*Qual é o resultado do seguinte programa?*/

int main(){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    
    printf("contador/valor/valor/endereco/endereco");
    
    for(i = 0; i < 5; i++){
 
    printf("\ni = %d\n", i); //Mostra na tela o contador
    printf(" vet[%d] = %.1f\n", i, vet[i]);//Irá mostrar a sequencia
    printf(" *(f + %d) = %.1f\n", i, *(f+i));//A mesma coisa que em cima
    printf(" &vet[%d] = %p\n", i, &vet[i]);//Mostrará o endereço do vetor
    printf(" (f + %d) = %p\n", i, f+i); //A mesma coisa que em cima
    }
}