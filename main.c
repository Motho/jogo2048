#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<menu.h>

struct jogador{
	int score;//quanto pontuou
	char nome[];//o nome que a pessoa escolheu ser registrada
}player[5];//ele vai guardar os 6 jogadores 

struct matriz{
	int posicao[4][4];//isso aqui esta certo porque as posicoes [4][4] nao serao ocupadas
	//math.h funcao pow(base,expoente);os valores de tabuleiro serao 2^10 	
}tabuleiro;

int estado_do_jogo(void){	
	
	int i,j, multiplicacao_das_posicoes= 1;
	for(i = 0; i<4; i++){
		for(j = 0; j<4; j++){
			multiplicacao_das_posicoes= multiplicacao_das_posicoes*tabuleiro.posicao[i][j];
			if(tabuleiro.posicao[i][j] == 2048){//verifica se venceu, a condicao de vitoria devera ser colocada primeiro
				printf("Voce venceu ensira seu nome");
				scanf("%s",player[0].nome[49]);//nome da pessoa
				player[0].score;//score do jogador que participou
				return ;//
				
			}
			if(multiplicacao_das_posicoes!= 0) return 0;//derrota encerra o programa
		}
  }

}

void tabela(int pontuacao,int nome){

	printf("|--------------------------------------------------|                press q para encerrar   ");
	printf("|                         |                        |");
	printf("|          PONTOS	        |           NOME         |");
	printf("|                         |                        |");
	printf("|--------------------------------------------------|");
	printf("|                         |                        |");
	printf("|            %d           |           %d           |");
	printf("|                         |                        |");
	printf("|--------------------------------------------------|");
//precisa de uma opcao para 
}

}
int jogo(){// as mecanicas do jogo comecam aqui
{//vai entrar o struct matriz aqui dentro
	char movimento;

 /* O script vai ser o seguinte: as matrizes vao conter zero no momento que o jogo comeca um 2 aparece em um elemento da matriz qualquer"vou precisar de uma biblioteca que de randomizacao", quando e apertado a tecla para cima os numeros precisam estar fora das bordas se nao eles nao iram mover, quando os numeros estao fora das bordas o numero ir subir e caso tenha um numero em cima dele o numero de cima ira subir primeiro e se os numeros forem iguais eles iam somar e a posicao resultante sera a borda, detalhe a posicao resultante de cada elemento e variavel dependendo do sentido da soma dos numeros, detalhe todos os numeros sao movidos na mesma direcao e so existe a opcao de se mover na direcao desejado ou ele nao se move, de qualquer forma se nenhum se mover entao o 2 randomizado nao ira aparecer
*/
	//
	int begin;
	while(begin){
	//rand(matriz);so que so em uma var
	//loop para veerificar as posicoes com zero e nao printar elas
	//calcular a pontuacao sera

		estado_do_jogo();
	printf("|-------------------------------------------------------------------------|");//minutos e seg
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|       %d        |        %d        |        %d        |       %d        |",tabuleiro.posicao[0][0],tabuleiro.posicao[0][1],tabuleiro.posicao[0][2], tabuleiro.posicao[0][3]);
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|-------------------------------------------------------------------------|");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|        %d       |        %d        |       %d         |       %d        |", tabuleiro.posicao[1][0], tabuleiro.posicao[1][1], tabuleiro.posicao[1][2],tabuleiro.posicao[1][3]);// a21, a22, 23, a24
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
	printf("|         %d      |         %d       |         %d       |        %d       |",tabuleiro.posicao[3][0],tabuleiro.posicao[3][1],tabuleiro.posicao[3][2],tabuleiro.posicao[3][3]);//a41, a42,a43, a44 
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|                 |                  |                  |                 |");
	printf("|-------------------------------------------------------------------------|");
	printf("                                  'q' para sair                            ");
	scanf("%c", movimento);
	if(movimento == 'w'){
    //faz um loop pela matriz de forma diagonal
	  for(;;);

	}
  if(movimento == 's');
  if(movimento == 'a');
  if(movimento == 'd');
	if(movimento == 'q') return menu();
	}

}
int main()// vai ser realizado as operacoes aqui dentro 
{
	menu();//comeca aqui
	jogo();//opcao do menu
	tabela();//opcao do menu, vai receber o arg de entrada e receber um arg de score
	//mais coisa a ser adicionada a funcao main
  //if(estado_do_jogo == 

return 0;
}
