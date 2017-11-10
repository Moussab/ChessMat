#include "Board.h"

/* Affiche la configuration configuration */
void affich(configuration conf )
{
	int i, j, k;
	for (i=0;  i<8; i++)
		printf("\t   %c", i+'a');

    printf("\n");
    printf("\n");


	for (i=0;  i<8; i++)
		printf("\t|-----|");

    printf("\n");



	for(i=8; i>0; i--)  {
		printf("    %d  ", i);

        for (j=0; j<8; j++)

            if ( conf.board[i-1][j] < 0 )
                printf("\t| %cn  |", -conf.board[i-1][j]);
            else if ( conf.board[i-1][j] > 0 )
                printf("\t| %cb  |", conf.board[i-1][j]);
            else
                printf("\t|     |");

            printf("\t  %d\n", i);

            for (k=0;  k<8; k++)
                printf("\t|-----|");

            printf("\n");
	}

	printf("\n");

	for (i=0;  i<8; i++)
		printf("\t   %c", i+'a');

    printf("\n");

} // affich
