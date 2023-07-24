#include<stdio.h>

int main(){
 int valor;
 int *p1;

 float temp;
 float *p2;
 
 char aux;
 char *nome = "Algoritmos";
 char *p3;
 
 int idade;
 int vetor[3];
 int *p4;
 int *p5;

/* (a) */
  	valor = 10; 	// Armazena o valor 10 na variável 'valor'.
  	p1 = &valor; 	// Armazena o endereço da variável 'valor' no ponteiro 'p1'('p1' aponta para 'valor').
 	*p1 = 20; 	// Armazena o valor 20 dentro do espaço de memória endereçado por 'p1',
		  	// mesmo espaço de memória alocada para a variável 'valor'.
			// Portanto, o resultado armazenado na variável 'valor' foi alterado.
 	printf("a) = %d \n", valor); 	//Imprime o valor da variável 'valor'. 

	// Resultado: 20



	/* (b) */
 	temp = 26.5;	// Armazena o valor 26.5 na variável 'temp'. 
  	p2 = &temp;	// Armazena o endereço da variável 'temp' no ponteiro 'p2('p2' aponta para 'temp').
  	*p2 = 29.0;	// Armazena o valor 29.0 dentro do espaço de memória endereçado por 'p2',
			// mesmo espaço de memória alocada para a variável 'temp'.
			// Logo, o resultado armazenado na variável 'temp' foi alterado.
  	printf("b) = %.1f \n", temp);	//Imprime o valor da variável 'temp'.

	// Resultado: 29.0



	/* (c) */
 	p3 = &nome[0];  // Armazena o endereço do vetor 'nome[0]' no ponteiro 'p3'( primeiro elemento).		
 	aux = *p3;	// Variável aux recebe o conteúdo do ponteiro 'p3'.

 	printf("c) = %c \n", aux);	// Imrpime o valor guardado em 'aux'.

	//Resultado: A



 	/* (d) */
  	p3 = &nome[4];	// Armazena o endereço do vetor 'nome[4]' no ponteiro 'p3'( quarto elemento).
 	aux = *p3;	// Variável aux recebe o conteúdo do ponteiro 'p3'.
 	printf("d) = %c \n", aux);	// Imrpime o valor guardado em 'aux'.
	//Resultado: r
	

 	/* (e) */
 	p3 = nome;	// Armazena o endereço do vetor 'nome' no ponteiro p3. Como não foi especificado
			// a posição do vetor, o ponteiro 'p3' irá armazenar a posição '0' do vetor 'nome'.
 	printf("e) = %c \n", *p3);	// Imprime o valor apontado por 'p3'.
	//Resultado: A
	

 	/* (f) */
 	p3 = p3 + 4;	// O endereço do ponteiro 'p3' irá se deslocar 4 bytes para frente, ja que o ponteiro 'p3'
			// é do tipo char(1 byte).
 	printf("f) = %c \n", *p3);	//Imprime o valor apontado por 'p3'.
	//Resultado: r


 	/* (g) */
 	p3--;		// O endereço do ponteiro 'p3' irá de deslocar em 1 byte para traz, já que o ponteiro 'p3'
			// é do tipo char(1 bype).	
 	printf("g) = %c \n", *p3);	//Imprime o valor apontado por 'p3'.
	//Resultado: o


 	/* (h) */
 	vetor[0] = 31;	// Armazena o valor '31' na posição 'vetor[0]'.
 	vetor[1] = 45;	// Armazena o valor '45' na posição 'vetor[0]'.
 	vetor[2] = 27;	// Armazena o valor '27' na posição 'vetor[0]'.
  	p4 = vetor;	// O ponteiro 'p4' recebe o endereço do vetor 'vetor'. Como
			// 'p4' só guarda um endereço, então o endereço guardado no 
			// ponteiro será o endereço da posição '0' do vetor 'vetor'.
 	idade = *p4;	// Armazena o conteúdo do endereço apontado por 'p4' na variável
			// idade.
 	printf("h) = %d \n", idade);	//Imprime o valor da variável idade.
	//Resultado: 31


 	/* (i) */
  	p5 = p4 + 1;	// O endereço do ponteiro 'p5' será incrementado em 1 byte(char).
 	idade = *p5;	// Armazena o conteúdo apontado por 'p5'.
 	printf("i) = %d \n", idade);	//Imprime o valor da variável idade.
	//Resultado: 45


 	/* (j) */
 	p4 = p5 + 1;	//O endereço do ponteiro 'p4' será o mesmo do ponteiro 'p5' incrementado
			// de 1 byte(char).
  	idade = *p4;	// Armazena o conteúdo apontado por 'p4'.
  	printf("j) = %d \n", idade);	//Imprime o valor da variável idade.
	//Resultado: 27
	

  	/* (l) */
  	p4 = p4 - 2;	// O endereço do ponteiro 'p4' será decrementado em 2 byte(char).
  	idade = *p4;	// Armazena o conteúdo apontado por 'p4'.
  	printf("k) = %d \n", idade);	//Imprime o valor da variável idade.
	//Resultado: 31


 	/* (m) */
  	p5 = &vetor[2] - 1;	// Armazena o endereço do posição do vetor 'vetor[2]' decrementado 
				// em 1 byte.
  	printf("l) = %d \n", *p5);	//Imprime o conteúdo do ponteiro 'p5'.
	//Resultado: 45


  	/* (n) */
  	p5++;			//Incrementa o endereço do ponteiro 'p5' em 1 byte.
 	printf("m) = %d \n", *p5);	//Imprime o conteúdo do ponteiro 'p5'.
	//Resultado: 27
}