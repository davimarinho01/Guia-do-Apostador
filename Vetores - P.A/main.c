#include <stdio.h>
#include <stdlib.h>

/* Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A (Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.*/

int main(){
	
	int vet[10], i, R;
	
	printf("Digite ovalor da razao da PA: ");
	scanf("%d",&R);
	
	for(i=0;i<10;i++){
		vet[i] = vet[i-1]+R;
	}
	
	for(i=0;i<10;i++){
		printf("%d ", vet[i]);
	}
}	