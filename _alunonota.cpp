/* 6 alunos com 2 notas e a média*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){

	float notas[2][6], media=0; // linhas e colunas
	int l,c;
	
	for (c=0; c<6; c++){
		for (l=0; l<2; l++){
			printf("\nInforme a nota %d do aluno %d: ", l+1, c+1);
			scanf("%f", &notas[l][c]);
		}
		
	}
	for (c=0; c<6; c++){
		media = 0;
		for (l=0; l<2; l++){
			printf("%.1f 0", notas[l][c]);	
			media += notas[l][c];
			
		}
		printf("%.1f \n", media/2);
	}
	
}
