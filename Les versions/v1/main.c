#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct configuration{
	char board[8][8];		// L'echiquier
	int val;			// Estimation de la configuration
	int turn;			// Vau 1 si c'est le toure des blac, et 0 si c'est le toure des noires
}configuration;

/* Intialise la disposition des pieces dans la configurationiguration initiale configuration */
void init(  configuration *configuration )
{
   	int i, j;

    	for (i=0; i<8; i++)
		for (j=0; j<8; j++)
			configuration->board[i][j] = 0;	// Les cases vides sont initialisées avec 0

	configuration->board[0][0] =  't';
	configuration->board[0][1] =  'c';
	configuration->board[0][2] = 'f';
	configuration->board[0][3] =  'n';
	configuration->board[0][4] =  'r';
	configuration->board[0][5] =  'f';
	configuration->board[0][6] = 'c';
	configuration->board[0][7] =  't';

	for (j=0; j<8; j++) {
		configuration->board[1][j] = 'p';
 		configuration->board[6][j] = -'p';
		configuration->board[7][j] = -configuration->board[0][j];
	}
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



/* Affiche la configurationiguration configuration */
void affich(configuration configuration )
{
	int i, j, k;
	for (i=0;  i<8; i++)
		printf("\t  %c", i+'a');
   	printf("\n");
printf("\n");
	for (i=0;  i<8; i++)
		printf("\t----- ");
   	printf("\n");

	for(i=8; i>0; i--)  {
		printf("    %d  ", i);
		for (j=0; j<8; j++)
			if ( configuration.board[i-1][j] < 0 ) printf("\t -%c", -configuration.board[i-1][j]);
			else if ( configuration.board[i-1][j] > 0 ) printf("\t +%c", configuration.board[i-1][j]);
				  else printf("\t  ");
		printf("\t  %d\n", i);

		for (k=0;  k<8; k++)
			printf("\t----- ");
   		printf("\n");
	}
	printf("\n");
	for (i=0;  i<8; i++)
		printf("\t  %c", i+'a');
   	printf("\n");

} // affich



int main()
{
    configuration board;
    init(&board);
    affich(board);
    printf("Hello world!\n");
    return 0;
}
