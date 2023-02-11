#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "menu.h"

#define N_jogadores 1

struct jogador{
	char nome[50];//o nome que a pessoa escolheu para ser registrada ser registrada
}player[N_jogadores];//ele vai guardar os 5 jogadores 

struct matriz{ //tabuleiro de pecas
	int posicao[4][4];	
}tabuleiro;

//Faz gerar blocos de valor 2(maior probabilidade) e 4(menor probabilidade) numa posicao aleatoria vazia no tabuleiro

void surge_peca(void){
  int numero= rand() % 10, bloco4= 4, bloco2= 2;
  int p1= rand()%4,p2= rand()%4;
	if(numero>= 9 && tabuleiro.posicao[p1][p2]== 0) tabuleiro.posicao[p1][p2]= bloco4;
	else surge_peca();
	if(numero<= 8 && tabuleiro.posicao[p1][p2]== 0) tabuleiro.posicao[p1][p2]= bloco2;
	else surge_peca();
}

int estado_do_jogo(void){	//checa condicoes de vitoria e derrota alem de pegar o nome do jogador vencedor
	
	int i,j, multiplicacao_das_posicoes= 1;
	for(i = 0; i<4; i++){
		for(j = 0; j<4; j++){
			multiplicacao_das_posicoes= multiplicacao_das_posicoes*tabuleiro.posicao[i][j];
			if(tabuleiro.posicao[i][j] == 2048) return 1;//vitoria.
			if(multiplicacao_das_posicoes!= 0) return 2;//derrota, encerra o programa
			return 3;//continua o jogo
		}
  }

}

int tabela(char nome[]){//Tabela que armazena o nome da pessoa, no trabalho 2 ela sera devidamente implementada

	char escolha;
	printf("|-------------------------|      pressione 'q' para ir ao menu\n");
	printf("|                         |\n");
	printf("|           NOME          |\n");
	printf("|                         |\n");
	printf("|-------------------------|\n");
	printf("|                         |\n");
	printf("|            %s           |\n",player[0].nome);
	printf("|                         |\n");
	printf("|-------------------------|\n");
	printf("|                         |\n");
	printf("|            %s           |\n",player[1].nome);
	printf("|                         |\n");
  printf("|-------------------------|\n");

	scanf(" %c",&escolha);

	if(escolha == 'q') return 0;
	else tabela(nome);
}

int jogo(/*int* op_menu*/){// as mecanicas do jogo comecam aqui
	char movimento;
	while(1){
    
		if(estado_do_jogo() == 1){
		  printf("Voce venceu. Insira seu nome;");
			return 0;
			//scanf("%s",player->nome);
			//tabela(player[0].nome);//entra na tabela mostrando o nome da pessoa que venceu o jogo
		}
		if(estado_do_jogo() == 2) return 0;// vai encerrar o programa caso o num de pecas ocupe todo o tabuleiro
		if(estado_do_jogo() == 3) surge_peca();// continua o jogo surgindo uma peca

  //nao chegou aqui ainda 

	printf("|-------------------------------------------------------------------------|\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|        %d       |         %d       |        %d        |        %d       |\n",tabuleiro.posicao[0][0],tabuleiro.posicao[0][1],tabuleiro.posicao[0][2], tabuleiro.posicao[0][3]);
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|-------------------------------------------------------------------------|\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|        %d       |         %d       |        %d        |        %d       |\n", tabuleiro.posicao[1][0], tabuleiro.posicao[1][1], tabuleiro.posicao[1][2],tabuleiro.posicao[1][3]);// a21, a22, 23, a24
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|-------------------------------------------------------------------------|\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|        %d       |         %d       |        %d        |        %d       |\n", tabuleiro.posicao[2][0], tabuleiro.posicao[2][1], tabuleiro.posicao[2][2], tabuleiro.posicao[2][3]);// a31, a32, a33, a34
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|-------------------------------------------------------------------------|\n");	
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|        %d       |         %d       |        %d        |        %d       |\n",tabuleiro.posicao[3][0],tabuleiro.posicao[3][1],tabuleiro.posicao[3][2],tabuleiro.posicao[3][3]);//a41, a42,a43, a44 
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|                 |                  |                  |                 |\n");
	printf("|-------------------------------------------------------------------------|\n");
	printf("                                  'q' para sair                            \n");
	
	scanf(" %c", &movimento);
 
  //Parte responsavel pela movimentacao onde as colunas e as linhas se movimentam
  int i,j;
  
       if(movimento == 'd'){//prototipo ainda nao cobre a possibilidade das pecas iguais se juntarem novamanete 
       for(i=0;i<3;i++){//talvez eu tenha que mudar aqui para concertar
				 for(j=0;j<4;j++)
					 if(tabuleiro.posicao[j][i] == tabuleiro.posicao[j][i+1] && (tabuleiro.posicao[j][i] && tabuleiro.posicao[j][i] != 0)){ 
					   tabuleiro.posicao[j][i+1]= tabuleiro.posicao[j][i+1] + tabuleiro.posicao[j][i];
					 }
			     if(tabuleiro.posicao[j][i+1]== 0){//certo
						 tabuleiro.posicao[j][i+1]= tabuleiro.posicao[j][i];
					 }
					 if(tabuleiro.posicao[j][i] != 0 && (tabuleiro.posicao[j][i+1] != tabuleiro.posicao[j][i])) continue;
					 //talvez precise de mais um if statement if(tabuleiro.posicao[j][i]== 0) continue;
			 }
				tabuleiro.posicao[j][i]= 0;//os dois primeiro if statements querem que voce resete tab.pos[j][i], para evitar escrever duas vezes, botar no loop exterior
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
				   if(tabuleiro.posicao[i][j] == tabuleiro.posicao[i-1][j]){
					   
					 }
      }
      if(movimento == 's'){
				for(i=0;i<3;i++)
					for(j=0;j<4;j++)
						if(tabuleiro.posicao[i][j] == tabuleiro.posicao[i+1][j]){
						}
      }
			if(movimento == 'q') return 0;
	}
}

int main(void){
	for(int i=0;i<4;i++)
	  for(int j= 0;j<4;j++)
	    tabuleiro.posicao[i][j]= 0;
	//int opcao_menu= 1;//colocar o menu dentro do main,mudei para que sempre comece o jogo
	//menu(&opcao_menu);// O programa se inicia no menu
	//if (menu(&opcao_menu)== 1) jogo(&opcao_menu);//se o menu devolver 1 o jogo se inicia
	//tabela(player[0].nome);
  jogo(/*&opcao_menu*/);
}
