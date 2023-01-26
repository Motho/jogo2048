#include<stdio.h>
#include<string.h>


int menu(void){
	char jogo[]= "JOGAR(2)",tabela[]= "TABELA(1)";
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
	if(escolha == 2) return 2;
	if(escolha == 1) return 1;
  menu();
}
