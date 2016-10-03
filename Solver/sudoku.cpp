#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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
        clock_t t;
        t = clock();
        Remplir(grille,0);
        t = clock() - t;
        printf("Grille resolue:\n");
        affichage(grille);
    printf ("%f seconds",((float)t)/CLOCKS_PER_SEC);


}
