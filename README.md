# jogo2048
Ufes materia programacao 1 trabalho jogo 2048

Esse projeto simula o jogo 2048.
A biblioteca conio.h foi utilizada para o input instantaneo e pra cores e cursores
Para se programar o som foi utilizado o SDL2
os cursores do livro programming with curses o'relley media
//atencao existe um conflito de funcoes no curses.h e no conio.h

1- o jogo acaba em vitoria quando o numero 2048 é atingido e derrota caso todas as posicoes ocupadas sejam dif de zero ou o temp acabar
2- a soma so pode ser realizada por numero iguais
3- se existir 2+2 e 2+2 eles nao podem ser somados de uma vez resultando em 8, primeiro eles devem ser somados 2 com 2 = 4 e depois 4+4
5- use o stdlib rand() para pegar um numero aleatoria que ira representar uma posicao para spawnar o 2
6- use pow(int,int) dentro do math.h para usar exponenciais
7- 

pontos extras:
colocar cores;// posso usar o openGL ou o DirectX, Box2D, SDL
gravar o nome da pessoa que participou junto da pontuacao realizada; verei como fazer isso
posso colocar um timer de tempo maximo; usando o time.h, nada de timer
um menu inicial que vai ser o hub, dessa forma a pessoa se quiser ver a pontuacao antiga ela podera entrar no hub
pra ser mais hardcore dava para fazer no menu uma opcao de mudanca de fonte, colocar som(com escape key \a)
basicamente vai existir settings no menu 
coisas fodas : cinder c++ library,cairo c library

 Retirar os cursores e tempo
									
								________________________________
								|                              |
								|       Leia o main.c!!!!!     |
								|______________________________|
