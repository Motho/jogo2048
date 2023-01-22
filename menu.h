#include<stdio.h>
#include<string.h>


int menu(void){
	char jogo[]= "JOGAR(0)",tabela[]= "TABELA(1)";
  int escolha; 

        printf("|-----------------------------------------|");
	printf("|                   |                     |");
	printf("|                   |                     |");
	printf("|                   |                     |");
	printf("|      JOGAR(0)     |       TABELA(1)     |");
	printf("|                   |                     |");
	printf("|                   |                     |");
	printf("|                   |                     |");
	printf("|-----------------------------------------|");
 
  scanf("%d",&escolha);
	if(escolha == 0) return 0;
	if(escolha == 1) return 1;
  menu();
}
