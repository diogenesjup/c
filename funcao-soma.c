#include <stdio.h>
#include <stdlib.h>

int soma(int a,int b){

	int c = 0;

	c = a + b;

	return c;

}

void main(){

	int entrada1 = 0, entrada2 = 0;
	int resultado = 0;
        int controle = 0;
        
        do{
		system("clear");

		printf("\t#######################################\n\n");

		printf("\t BEM VINDO AO PROGRAMA DE SOMAS\n\n");

		printf("\t#######################################\n\n");

		printf("Digite o número da Entrada 1: "); scanf("%d",&entrada1);
		printf("\nDigite o número da Entrada 2: "); scanf("%d",&entrada2);

		resultado = soma(entrada1,entrada2);

		system("clear");
		printf("O RESULTADO DA SOMA É: %d\n\n\n",resultado);
		printf("\n\n\n\ndigite 0 para fazer uma nova soma,\nou qualquer outro número para sair:"); scanf("%d",&controle);

        }while(controle<1);

}
