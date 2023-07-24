#include<stdio.h>

//Exercício 6. O que fazem os seguintes programas?

int main(){
  	int vet[] = {4,9,13};  /Declarando um vetor 'vet[]' preenchendo com valores iniciais {4, 9, 10}.

  	for(int i = 0; i < 3; i++){ //Imprime o conteúdo do bloco da memória cujo o endereço é o do vetor 'vet'.
   	    printf("%d ",*(vet+i));
    }
    
    printf("\n");
    
    programa2();
}	
 
void programa2(){
 	int vet[] = {4,9,13};
  	
    for(int i = 0; i < 3 ; i++){
  	    printf("%d ",vet+i);
 	}
    /*Invés de imprimir o conteúdo dos blocos de memória, o programa vai imprimir o 
    endereço dos blocos do vetor 'vet'. É possível ver a variação de 4 bytes 
    no endereço de cada bloco do vetor 'vet'*/
}