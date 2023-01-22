#include<stdio.h>
#include<string.h>


int menu(void){
	char jogo[]= "JOGAR(0)",tabela[]= "TABELA(1)";
  int escolha; 
	//duas coisas ela retorna jogo ou tabela
  printf("|-----------------------------------------|");
	printf("|                   |                     |");
	printf("|                   |                     |");
	printf("|                   |                     |");
	printf("|         %s        |          %s         |",jogo,tabela);
	printf("|                   |                     |");
	printf("|                   |                     |");
	printf("|                   |                     |");
	printf("|-----------------------------------------|");
 
  scanf("%d",&escolha);
	if(escolha == 0) return 0;
	if(escolha == 1) return 1;
  menu();
}
