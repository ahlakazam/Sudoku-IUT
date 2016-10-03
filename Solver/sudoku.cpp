#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "sudoku.h"
#include "Fsudoku.cpp"


int main(){

    int grille[9][9] =
    {
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,3,0,8,5},
        {0,0,1,0,2,0,0,0,0},
        {0,0,0,5,0,7,0,0,0},
        {0,0,4,0,0,0,1,0,0},
        {0,9,0,0,0,0,0,0,0},
        {5,0,0,0,0,0,0,7,3},
        {0,0,2,0,1,0,0,0,0},
        {0,0,0,0,4,0,0,0,9}
    };

    printf("Grille a completer:\n");
    affichage(grille);

    Remplir(grille,0);

    printf("Grille resolue:\n");
    affichage(grille);
}
