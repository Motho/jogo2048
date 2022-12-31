#include<ncurses.h>
#include<stdlib.h>
//ta funcionando, se usar g++ cursores.cpp -std=c99 -lncurses -o teste
//--------------------------------------------------------
// FUNCTION PROTOTYPES
//--------------------------------------------------------
void printing();
void moving_and_sleeping();
void colouring();

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(void)
{
    initscr();

    addstr("-----------------\n| codedrome.com |\n| ncurses Demo  |\n-----------------\n\n");
    refresh();

    //printing();

    //moving_and_sleeping();

    //colouring();

    addstr("\npress any key to exit...");
    refresh();

    getch();

    endwin();

    return EXIT_SUCCESS;
}

