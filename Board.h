#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

typedef struct configuration{
	char board[8][8];		// L'echiquier
	int val;			// Estimation de la configuration
	int turn;			// Le numero du tour de joueur, on l'incremente chaque fois qu'on joue
	int roque;          // Vau 0 si le roque est possible, 1 pour le petit roque, 2 pour le grand roque
} configuration;


#endif // BOARD_H_INCLUDED
