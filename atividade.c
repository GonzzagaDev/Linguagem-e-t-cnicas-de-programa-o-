#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função, bloco de codigo reutilizavel com uma opreção de uso comum
// Tipo mome_da_função (lista de_parametros na forma TIPO nome_do_parametro

int maior (int a, int b){
	return (a+b+abs(a-b))/2;
	
}




int main(int argc, char** argv) {
	int vet[10];
	int i, maior_valor;
	
	for(i=0; i<10; i++) scanf("%d", &vet[i]);
	
	for(i= 0, maior_valor = vet[i]; i<10; i++){
		maior_valor= maior(maior_valor, vet[i]);
	}
	printf("%d eh o maior", maior_valor);
		
	
	
	
	
	return 0;
}
