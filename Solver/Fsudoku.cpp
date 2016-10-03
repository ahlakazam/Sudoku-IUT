#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "sudoku.h"


/* ------------------------VerifierLigne--------------------*/
bool verifierLigne(int k, int grille[9][9],int i){
    for (int j=0; j < 9; j++)
        if (grille[i][j] == k) return false;
    return true;
}

/* ------------------------VerifierColone--------------------*/
bool verifierColonne(int k, int grille [9][9],int j){
    for (int i=0; i < 9; i++)
        if (grille[i][j] == k)
            return false;
    return true;
}

/*---------------------------------VerifieRegion-----------------------*/
bool verifierRegion (int k, int grille[9][9], int i, int j){
    int Ri = i-(i%3), Rj = j-(j%3);
    for (i=Ri; i < Ri+3; i++)
        for (j=Rj; j < Rj+3; j++)
            if (grille[i][j] == k)
                return false;
    return true;
}

/*--------------------------GrilleValide------------------------------*/
bool Remplir (int grille[9][9], int position){
    //Si on arrive a la derniere case de la grille on termine
    if (position == 9*9)return true;

    int i = position/9, j = position%9;
    //On appelle la fonction recursivement pour savoir si il va y avoir un probleme par la suite
    if (grille[i][j] != 0)return Remplir(grille, position+1);
    // Toute les valeurs possible d une case
    for (int k=1; k <= 9; k++){
        //Verification si la valeur est valide
        if (verifierLigne(k,grille,i) && verifierColonne(k,grille,j) && verifierRegion(k,grille,i,j)){
            grille[i][j] = k;
            if ( Remplir (grille, position+1) )return true;
        }
    }
    //il ne faut pas oublier de remettre la case à 0 si il y a un probleme
    grille[i][j] = 0;

    return false;
}



// Fonction d'affichage
void affichage (int grille[9][9])
{
    int i,j,k;
    printf("\n");
    for(i=0; i<9; i++ ){
		for(k=0; k <= 4*9; k++ ){printf("-");}
		printf("\n|");
		for(j=0; j<9; j++ ){
            if( grille[i][j] == 0 )printf("   |");
                else printf(" %d |", grille[i][j]);
		}
		printf("\n");
	}
	for(k=0; k<=4*9; k++ ){printf("-");}
	printf("\n");
}

