//realizarei os testes dos algoritimos aqui

_____________________ 
| 00 | 01 | 02 | 03 | 
|    |    |    |    | 
--------------------- 
| 10 | 11 | 12 | 13 | 
|    |    |    |    | 
--------------------- 
| 20 | 21 | 22 | 23 | 
|    |    |    |    | 
--------------------- 
| 30 | 31 | 32 | 33 | 
|    |    |    |    | 
--------------------- 

if(movimento == 'd'){
  for(size_t i= 0;i<4;i++){
    for(size_t j= 2;j>0;j--){
      if(tabuleiro.posicao[i][j] == tabuleiro.posicao[i][j+1]){
        tabuleiro.posicao[i][j+1]= tabuleiro.posicao[i][j];
        tabuleiro.posicao[i][j]= tabuleiro.posicao[i][j-1];
        //tabuleiro.posicao[i][j-1]= 0;
      }
      if(tabuleiro.posicao[i][j-1] == tabuleiro.posicao[i][j+1] && tabuleiro.posicao[i][j] == 0){
        tabuleiro.posicao[i][j+1]= tabuleiro.posicao[i][j-1];
        //tabuleiro.posicao[i][j-1]= 0;
      }
      if(tabuleiro.posicao[i][j]== 0) tabuleiro.posicao[i][j]={
        tabuleiro.posicao[i][j-1];//certo ?
        //tabuleiro.posicao[i][j-1]= 0;
      }
      //mais alguma coisa talvez?
    }
    tabuleiro.posicao[i][j-1]= 0;
  }
}
