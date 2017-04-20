/* Matriz Bidimensional */ 

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){

	int matriz[2][3]; // linhas e colunas
	int l,c;
	
	for(l=0; l<2; l++){
		for(c=0; c<3; c++){
			printf("Digite: ");
			scanf("%d", &matriz[l][c]);
		}
	}
	for(l=0; l<2; l++){
		for(c=0; c<3; c++){
		printf("%d", matriz[l][c]);	
	
		}
		printf("\n");	
	
	}

}
