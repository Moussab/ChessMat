#include "Board.h"

/* Intialise la disposition des pieces dans la configurationiguration initiale configuration */
void init(  configuration *configuration )
{
   	int i, j;

    	for (i=0; i<8; i++)
		for (j=0; j<8; j++)
			configuration->board[i][j] = 0;	// Les cases vides sont initialisées avec 0

	configuration->board[0][0] =  'T';
	configuration->board[0][1] =  'C';
	configuration->board[0][2] = 'F';
	configuration->board[0][3] =  'D';
	configuration->board[0][4] =  'R';
	configuration->board[0][5] =  'F';
	configuration->board[0][6] = 'C';
	configuration->board[0][7] =  'T';

	for (j=0; j<8; j++) {
		configuration->board[1][j] = 'P';
 		configuration->board[6][j] = -'P';
		configuration->board[7][j] = -configuration->board[0][j];
	}
	configuration->roque = 0;
	configuration->turn = 0;
/*
	configuration->xrB = 0;
	configuration->yrB = 4;
	configuration->xrN = 7;
	configuration->yrN = 4;

	configuration->roqueB = 'r';
	configuration->roqueN = 'r';
*/
	configuration->val = 0;

} // init

