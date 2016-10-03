#ifndef SUDOKU_H_INCLUDED
#define SUDOKU_H_INCLUDED

//--------Prototypes-------

void affichage();
bool Remplir (int grille[9][9], int position);
bool verifierLigne(int k, int grille[9][9],int i);
bool verifierColonne(int k, int grille [9][9],int j);
bool verifierRegion (int k, int grille[9][9], int i, int j);

#endif // SUDOKU_H_INCLUDED
