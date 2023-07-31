#include<stdio.h>

/*Qual é o resultado do seguinte programa?*/

int main(){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    
    for(i = 0; i < 5; i++){
    printf("contador/valor/valor/endereco/endereco\n");
    printf(" i = %d |", i); //Mostra na tela o contador
    printf(" vet[%d] = %.1f |", i, vet[i]);//Irá mostrar o conteúdo do vetor
    printf(" *(f + %d) = %.1f |", i, *(f+i));//A mesma coisa que em cima
    printf(" &vet[%d] = %p |", i, &vet[i]);//Mostrará o endereço do vetor
    printf(" (f + %d) = %p |", i, f+i); //A mesma coisa que em cima
    printf("\n\n");
    }
}