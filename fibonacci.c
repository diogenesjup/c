#include <stdio.h>
#include <stdlib.h>


void main(){


int menu = 9;
int valor = 0;
int interacoes = 0;

system("clear");

do{

printf("\t#===================================================#");
printf("\n");
printf("\n");

printf("\t BEM VINDO AO PROGRAMA SEQUÊNCIA DE FIBONACCI 1000 \n");

printf("\n");
printf("\n");
printf("\t#===================================================#");

printf("\n");
printf("\n");

printf("\tESCOLA UMA DAS OPÇÕES DO MENU\n\n\n");

printf("\t[1] INFORMAR NÚMERO DE INTERAÇÕES\n");
printf("\t[0] SAIR DO PROGRAMA\n");
printf("\t[] SUA ESCOLHA: "); scanf("%d",&menu);

system("clear");
printf("\tNÚMERO DE INTERAÇÕES: "); scanf("%d",&interacoes);
system("clear");


		if(menu==1){

			int vetorValores[interacoes];

			int i = 0;

					while(i<interacoes){

								if(i==0){
									vetorValores[i] = 0;
								}

								if(i==1){
									vetorValores[i] = 1;
								}

								if(i==2){
									vetorValores[i] = 1;
								}
                                
                                if(i>2){
                                	vetorValores[i] = vetorValores[i-1] + vetorValores[i-2];
                                }


									i++;
					}

		}


printf("\t#===================================================#");
printf("\n");
printf("\n");
printf("\t IMPRESSÃO DOS RESULTADOS: \n\n");

for(j=0;j<interacoes;j++){

printf("%d\t", vetorValores[j]);

}

printf("\n");
printf("\n");
printf("\t#===================================================#");

}while(menu!=0);


}