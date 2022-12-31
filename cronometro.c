//esse programa tem duas funcoes, cronometrar quanto tempo a pessoa levou para terminar o jogo e encerrar o jogo se ela levar mais de um determinado tempo, melhor nao fazer um cronometro; vai dar muito mais trabalho 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_MIN 45
#define MAX_SEG 60
int main()
{
	int i,j,tempo_vitoria;
	for(i=0;i<MAX_MIN;++i){//esse aqui e o relogio
		for(j=0;j<60;++j){
			if(estado_de_jogo == vitoria){
			tempo_vitoria = printf("%d:%d",i,j);//pega o tempo que a pessoa fez
			}
		}
	}	
	for(i=MAX_MIN;i>0;--i){//realiza a derrota por tempo
	  for(j=MAX_SEG;j>0;--j){
	    if(i == 1){
	    	printf("Derrota");
	    }
	  }
	}
	getch();
return tempo_vitoria;
}
