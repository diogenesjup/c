#include <stdio.h>
#include <stdlib.h>

int soma(int a,int b){

	int c = a + b;
	return c;

}

int subtracao(int a,int b){

	int c = a - b;
	return c;

}

int multiplicacao(int a,int b){

	int c = a * b;
	return c;

}

int divisao(int a,int b){

	int c = a / b;
	return c;

}

void main(){

	int entrada1 = 0, entrada2 = 0;
	int resultado = 0;
    int controle = 100;
        
        do{
        	
		system("clear");

		printf("\t#========================================#\n\n");

		printf("\t BEM VINDO A CALCULADORA 3000\n\n\n");

		printf("\tESCOLHA UMA DAS OPÇÕES DO MENU\n\n");
		printf("\t[1] PARA SOMA\n");
		printf("\t[2] PARA SUBTRACAO\n");
		printf("\t[3] PARA MULTIPLICAÇÃO\n");
		printf("\t[4] PARA DIVISÃO\n");
		printf("\t[0] PARA SAIR DO PROGRAMA\n\n");
		printf("\tSUA ESCOLHA:"); scanf("%d",&controle);
        
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t#========================================#\n\n");


        printf("\tVALOR DA VARIAVEL 1:"); scanf("%d",&entrada1); printf("\n");
        printf("\tVALOR DA VARIAVEL 2:"); scanf("%d",&entrada2); printf("\n");

        printf("\n");
        printf("\n");
        printf("\n");
        system("clear");
      

        switch($controle){
        	case 1:
              resultado = soma(entrada1,entrada2);
        	break;
        	case 2:
              resultado = subtracao(entrada1,entrada2);
        	break;
        	case 3:
              resultado = multiplicacao(entrada1,entrada2);
        	break;
        	case 4:
              resultado = divisao(entrada1,entrada2);
        	break;
        }

        printf("\tO RESULTADO É: %d \n\n\n",resultado );

        printf("\tO QUE QUER FAZER A SEGUIR?\n\n");
	    printf("\t[9] VOLTAR AO INICIO\n");
		printf("\t[0] SAIR DO PROGRAMA\n\n");
		printf("\tSUA ESCOLHA:"); scanf("%d",&controle);

        }while(controle!=0);

}