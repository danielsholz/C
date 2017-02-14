// Algoritmo que leia um nro e diga o antecessor e sucesssor

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main (){
	setlocale(LC_ALL,"");
	int numero, antecessor, sucessor;
	printf("Informe um número: ");
	scanf("%d", &numero);
	antecessor = numero-1;
	sucessor = numero+1;
	printf("\n");
	printf("%d é o seu antecessor\n", antecessor);
	printf("%d é o seu sucessor\n", sucessor);
	return(0);
	}
