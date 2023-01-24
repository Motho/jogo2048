#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "menu.h"

struct jogador{
	char nome[50];//o nome que a pessoa escolheu ser registrada
}player[5];//ele vai guardar os 5 jogadores 

struct matriz{ //tabuleiro de pecas
	int posicao[4][4];	
}tabuleiro;

//Faz gerar blocos de valor 2(maior probabilidade) e 4(menor probabilidade) numa posicao aleatoria vazia no tabuleiro

void surge_peca(void){
  int numero= rand() % 10, bloco4= 4, bloco2= 2;
  int p1= rand()%4,p2= rand()%4;
	if(numero> 8 && tabuleiro.posicao[p1][p2] ==0) tabuleiro.posicao[p1][p2]= bloco4;
	else surge_peca();
	if(numero< 8 && tabuleiro.posicao[p1][p2] == 0) tabuleiro.posicao[p1][p2]= bloco2;
	else surge_peca();
}

int estado_do_jogo(void){	//checa condicoes de vitoria e derrota alem de pegar o nome do jogador vencedor
	
	int i,j, multiplicacao_das_posicoes= 1;
	for(i = 0; i<4; i++){
		for(j = 0; j<4; j++){
			multiplicacao_das_posicoes= multiplicacao_das_posicoes*tabuleiro.posicao[i][j];
			if(tabuleiro.posicao[i][j] == 2048) return 1;//verifica se venceu, a condicao de vitoria devera ser colocada primeiro
			if(multiplicacao_das_posicoes!= 0) return 2;//derrota encerra o programa
			return 3;//continua o jogo
		}//falta terminar a de
  }

}

void tabela(char nome[]){

	char escolha;
	printf("|-------------------------|      pressione 'q' para ir ao menu   ");
	printf("|                         |");
	printf("|           NOME          |");
	printf("|                         |");
	printf("|-------------------------|");
	printf("|                         |");
	printf("|            %s           |",player[0].nome);
	printf("|                         |");
	printf("|-------------------------|");
	printf("|                         |");
	printf("|            %s           |",player[1].nome);
	printf("|                         |");
  printf("|-------------------------|");

	scanf("%c",&escolha);

	if(escolha == 'q') menu();
	else tabela(nome);
}

int jogo(){// as mecanicas do jogo comecam aqui
{//vai entrar o struct matriz aqui dentro
	char movimento;
	int begin;
	while(begin){
	//calcular a pontuacao sera
    
		estado_do_jogo();
		if(estado_do_jogo() == 1){
		  printf("Voce venceu. Insira seu nome;");
			scanf("%s",player->nome);
			tabela(player[0].nome);
		}
		if(estado_do_jogo() == 2) return 0;
		if(estado_do_jogo() == 3) surge_peca();
	printf("|-------------------------------------------------------------------------|");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|        %d       |         %d       |        %d        |        %d       |",tabuleiro.posicao[0][0],tabuleiro.posicao[0][1],tabuleiro.posicao[0][2], tabuleiro.posicao[0][3]);
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|-------------------------------------------------------------------------|");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|        %d       |         %d       |        %d        |        %d       |", tabuleiro.posicao[1][0], tabuleiro.posicao[1][1], tabuleiro.posicao[1][2],tabuleiro.posicao[1][3]);// a21, a22, 23, a24
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|-------------------------------------------------------------------------|");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|        %d       |         %d       |        %d        |        %d       |", tabuleiro.posicao[2][0], tabuleiro.posicao[2][1], tabuleiro.posicao[2][2], tabuleiro.posicao[2][3]);// a31, a32, a33, a34
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|-------------------------------------------------------------------------|");	
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|        %d       |         %d       |        %d        |        %d       |",tabuleiro.posicao[3][0],tabuleiro.posicao[3][1],tabuleiro.posicao[3][2],tabuleiro.posicao[3][3]);//a41, a42,a43, a44 
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|-------------------------------------------------------------------------|");
	printf("                                  'q' para sair                            ");
	scanf("%c", &movimento);
 
  //Parte responsavel pela movimentacao, as colunas se movimentam
  int i,j;

//incompleto
       if(movimento == 'd'){
       for(i=0;i<3;i++)
				 for(j=0;j<4;j++)
					 if(tabuleiro.posicao[j][i] == tabuleiro.posicao[j][i+1] && (tabuleiro.posicao[j][i] != tabuleiro.posicao[j][i+1]) &&  ){
					   tabuleiro.posicao[j][i+1]= tabuleiro.posicao[j][i+1] +tabuleiro.posicao[j][i];
						 tabuleiro.posicao[j][i]= 0;
						 break;//lugar errado
					 }
			     //eles forem diferentes e diferentes de zero e para quando realizar a operacao de troca
     } 
      if(movimento == 'a'){
        for(i=0;i<3;i++)
					for(j=3;j>1;j--)
						if(tabuleiro.posicao[j][i] == tabuleiro.posicao[j][i-1]){
						  tabuleiro.posicao[j][i-1] = tabuleiro.posicao[j][i-1] + tabuleiro.posicao[j][i];
						}

      }
      if(movimento == 'w'){
       for(i=3;i>1;i--)
				 for(j=0;j<4;j++)
				   if(tabuleiro.posicao[i][j] == tabuleiro.posicao[i-1][j]){//certo
					   
					 }
      }
      if(movimento == 's'){
				for(i=0;i<3;i++)
					for(j=0;j<4;j++)
						if(tabuleiro.posicao[i][j] == tabuleiro.posicao[i+1][j]){
						  break;
						}
      }
			if(movimento == 'q') menu();
	}
int main(void){
	menu();//comeca aqui, ele retorna 0 para jogar e 1 para tabela
	jogo();//opcao do menu
	//opcao do menu, vai receber o arg de entrada e receber um arg de score
	//mais coisa a ser adicionada a funcao main

return 0;
}
