#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Board.h"
#include "initialisation.c"
#include "affichage.c"

#include "regle_de_deplacement.c"

void deplacerBlanc(configuration *board, int x1, int y1 ,int x2, int y2)
{
    int x = x1, y = y1;
    int i;
    int regle[2];
    bool cont = true;
    char piece = board->board[x1-1][y1-1];
//printf("etap1\n");
    switch(piece)
    {
        case 'F' :
            if((x1 != x2) && (y1 != y2))
            {
                if(x1 < x2 && y1 < y2)
                {
                    i = 1;
                }
                if(x1 > x2 && y1 < y2)
                {
                    i = 3;
                }
                if(x1 > x2 && y1 > y2)
                {
                    i = 5;
                }
                if(x1 < x2 && y1 > y2)
                {
                    i = 7;
                }
    //printf("%d\n",i);


                while ((x + DeplacementGenerale[i][0] >= 1) && (x + DeplacementGenerale[i][0] <= 8) && (y + DeplacementGenerale[i][1] >= 1) && (y + DeplacementGenerale[i][1] <= 8) && cont)
                {
    //printf("boucle\n");
                    x = x + DeplacementGenerale[i][0];
                    y = y + DeplacementGenerale[i][1];
                    // telque : 0 <= i <= 7 et i est impaire

                    if(i == 1)
                    {
                        if((x >= x2) || (y >= y2))
                        {
                            cont = false;
                        }
                    }
                    if(i == 3)
                    {
                        if((x <= x2) || (y >= y2))
                        {
                            cont = false;
                        }
                    }
                    if(i == 5)
                    {
                        if((x <= x2) || (y <= y2))
                        {
                            cont = false;
                        }
                    }
                    if(i == 7)
                    {
                        if((x >= x2) || (y <= y2))
                        {
                            cont = false;
                        }
                    }
                    if(board->board[x-1][y-1] != 0)
                    {
                        cont = false;
                    }
                }
                if((x == x2) && (y == y2))
                {
                    board->board[x2-1][y2-1] = board->board[x1-1][y1-1];
                    board->board[x1-1][y1-1] = 0;
                    //board->board[0][0] = 'r';
    //printf("etap2\n");
                }
                else
                {
                    printf("D�placement impossible!\n");
                }
            }
            else
            {
                printf("D�placement impossible!\n");
            }
            break;
            case 'T' :
            if(((x1 != x2) && (y1 == y2)) || ((y1 != y2) && (x1 == x2)))
            {
                if(x1 < x2)
                {
                    i = 0;
                }
                if(x1 > x2)
                {
                    i = 4;
                }
                if(y1 < y2)
                {
                    i = 2;
                }
                if(y1 > y2)
                {
                    i = 6;
                }
    //printf("%d\n",i);


                while ((x + DeplacementGenerale[i][0] >= 1) && (x + DeplacementGenerale[i][0] <= 8) && (y + DeplacementGenerale[i][1] >= 1) && (y + DeplacementGenerale[i][1] <= 8) && cont)
                {
    //printf("boucle\n");
                    x = x + DeplacementGenerale[i][0];
                    y = y + DeplacementGenerale[i][1];
                    // telque : 0 <= i <= 7 et i est impaire

                    if(i == 0)
                    {
                        if(x >= x2)
                        {
                            cont = false;
                        }
                    }
                    if(i == 2)
                    {
                        if(y >= y2)
                        {
                            cont = false;
                        }
                    }
                    if(i == 4)
                    {
                        if(x <= x2)
                        {
                            cont = false;
                        }
                    }
                    if(i == 6)
                    {
                        if(y <= y2)
                        {
                            cont = false;
                        }
                    }
                    if(board->board[x-1][y-1] != 0)
                    {
                        cont = false;
                    }
                }
                if((x == x2) && (y == y2))
                {
                    board->board[x2-1][y2-1] = board->board[x1-1][y1-1];
                    board->board[x1-1][y1-1] = 0;
                    //board->board[0][0] = 'r';
    //printf("etap2\n");
                }
                else
                {
                    printf("D�placement impossible!\n");
                }
            }
            else
            {
                printf("D�placement impossible!\n");
            }
            break;
            case 'D' :
            if(((x1 != x2) && (y1 == y2)) || ((y1 != y2) && (x1 == x2)) || ((x1 != x2) && (y1 != y2)))
            {
                if((x1 < x2) && (y1 == y2))
                {
                    i = 0;
                }
                if((x1 > x2) && (y1 == y2))
                {
                    i = 4;
                }
                if((y1 < y2) && (x1 == x2))
                {
                    i = 2;
                }
                if((y1 > y2) && (x1 == x2))
                {
                    i = 6;
                }
                if(x1 < x2 && y1 < y2)
                {
                    i = 1;
                }
                if(x1 > x2 && y1 < y2)
                {
                    i = 3;
                }
                if(x1 > x2 && y1 > y2)
                {
                    i = 5;
                }
                if(x1 < x2 && y1 > y2)
                {
                    i = 7;
                }
    //printf("%d\n",i);


                while ((x + DeplacementGenerale[i][0] >= 1) && (x + DeplacementGenerale[i][0] <= 8) && (y + DeplacementGenerale[i][1] >= 1) && (y + DeplacementGenerale[i][1] <= 8) && cont)
                {
    //printf("boucle\n");
                    x = x + DeplacementGenerale[i][0];
                    y = y + DeplacementGenerale[i][1];
                    // telque : 0 <= i <= 7 et i est impaire

                    if(i == 0)
                    {
                        if(x >= x2)
                        {
                            cont = false;
                        }
                    }
                    if(i == 2)
                    {
                        if(y >= y2)
                        {
                            cont = false;
                        }
                    }
                    if(i == 4)
                    {
                        if(x <= x2)
                        {
                            cont = false;
                        }
                    }
                    if(i == 6)
                    {
                        if(y <= y2)
                        {
                            cont = false;
                        }
                    }
                    if(board->board[x-1][y-1] != 0)
                    {
                        cont = false;
                    }
                }
                if((x == x2) && (y == y2))
                {
                    board->board[x2-1][y2-1] = board->board[x1-1][y1-1];
                    board->board[x1-1][y1-1] = 0;
                    //board->board[0][0] = 'r';
    //printf("etap2\n");
                }
                else
                {
                    printf("D�placement impossible!\n");
                }
            }
            else
            {
                printf("D�placement impossible!\n");
            }
            break;
            case 'R' :
            if(((x1 != x2) && (y1 == y2)) || ((y1 != y2) && (x1 == x2)) || ((x1 != x2) && (y1 != y2)))
            {
                if((x1 < x2) && (y1 == y2))
                {
                    i = 0;
                }
                if((x1 > x2) && (y1 == y2))
                {
                    i = 4;
                }
                if((y1 < y2) && (x1 == x2))
                {
                    i = 2;
                }
                if((y1 > y2) && (x1 == x2))
                {
                    i = 6;
                }
                if(x1 < x2 && y1 < y2)
                {
                    i = 1;
                }
                if(x1 > x2 && y1 < y2)
                {
                    i = 3;
                }
                if(x1 > x2 && y1 > y2)
                {
                    i = 5;
                }
                if(x1 < x2 && y1 > y2)
                {
                    i = 7;
                }
    //printf("%d\n",i);


                if ((x + DeplacementGenerale[i][0] >= 1) && (x + DeplacementGenerale[i][0] <= 8) && (y + DeplacementGenerale[i][1] >= 1) && (y + DeplacementGenerale[i][1] <= 8))
                {
    //printf("boucle\n");
                    x = x + DeplacementGenerale[i][0];
                    y = y + DeplacementGenerale[i][1];
                    // telque : 0 <= i <= 7 et i est impaire


                    if(board->board[x-1][y-1] != 0)
                    {
                        cont = false;
                    }
                }
                if((x == x2) && (y == y2))
                {
                    board->board[x2-1][y2-1] = board->board[x1-1][y1-1];
                    board->board[x1-1][y1-1] = 0;
                    //board->board[0][0] = 'r';
    //printf("etap2\n");
                }
                else
                {
                    printf("D�placement impossible!\n");
                }
            }
            else
            {
                printf("D�placement impossible!\n");
            }
            break;
            case 'C' :
                cont = false;
            if((x1 != x2) && (y1 != y2))
            {
                if((x2 == x1 + 1) && (y2 == y1 + 2))
                {
                    i = 2;
                    cont = true;
                }
                if((x2 == x1 + 1) && (y2 == y1 - 2))
                {
                    i = 5;
                    cont = true;
                }
                if((x2 == x1 - 1) && (y2 == y1 + 2))
                {
                    i = 1;
                    cont = true;
                }
                if((x2 == x1 - 1) && (y2 == y1 - 2))
                {
                    i = 6;
                    cont = true;
                }
                if((x2 == x1 + 2) && (y2 == y1 + 1))
                {
                    i = 3;
                    cont = true;
                }
                if((x2 == x1 + 2) && (y2 == y1 - 1))
                {
                    i = 4;
                    cont = true;
                }
                if((x2 == x1 - 2) && (y2 == y1 + 1))
                {
                    i = 0;
                    cont = true;
                }
                if((x2 == x1 - 2) && (y2 == y1 - 1))
                {
                    i = 7;
                    cont = true;
                }

    //printf("_%d\n",i);


                if (cont && (x + DeplacementCavalier[i][0] >= 1) && (x + DeplacementCavalier[i][0] <= 8) && (y + DeplacementCavalier[i][1] >= 1) && (y + DeplacementCavalier[i][1] <= 8))
                {
    //printf("boucle\n");
                    x = x + DeplacementCavalier[i][0];
                    y = y + DeplacementCavalier[i][1];
                    // telque : 0 <= i <= 7 et i est impaire


                    if(board->board[x-1][y-1] != 0)
                    {
                        cont = false;
                    }
                }
                if((x == x2) && (y == y2))
                {
                    board->board[x2-1][y2-1] = board->board[x1-1][y1-1];
                    board->board[x1-1][y1-1] = 0;
                    //board->board[0][0] = 'r';
    //printf("etap2\n");
                }
                else
                {
                    printf("D�placement impossible!\n");
                }
            }
            else
            {
                printf("D�placement impossible!\n");
            }
            break;

        case 'P' :
            if((x2 == x1 + (2 || 1)))
            {
                if((x2 == x1 + 2) && ( x1 == 2) && (y2 == y1))
                {
                    i = 0;
                }
                if((x2 == x1 + 1) && (y2 == y1))
                {
                    i = 0;
                }
                if((x2 == x1 + 1) && (y2 == y1 + 1) && (board->board[x2-1][y2-1] != 0))
                {
                    i = 1;
                }
                if((x2 == x1 + 1) && (y2 == y1 - 1) && (board->board[x2-1][y2-1] != 0))
                {
                    i = 7;
                }
                if((x2 == x1 - 2) && (x1 == 6) && (y2 == y1))
                {
                    i = 4;
                }
                if((x2 == x1 - 1) && (y2 == y1))
                {
                    i = 4;
                }
                if((x2 == x1 - 1) && (y2 == y1 + 1) && (board->board[x2-1][y2-1] != 0))
                {
                    i = 3;
                }
                if((x2 == x1 - 1) && (y2 == y1 - 1) && (board->board[x2-1][y2-1] != 0))
                {
                    i = 5;
                }

                //printf("_%d\n",i);

                int j = 0;
                while (  (x + DeplacementGenerale[i][0] >= 1) && (x + DeplacementGenerale[i][0] <= 8) && (y + DeplacementGenerale[i][1] >= 1) && (y + DeplacementGenerale[i][1] <= 8))
                {
                    //printf("boucle\n");
                    x = x + DeplacementGenerale[i][0];
                    y = y + DeplacementGenerale[i][1];
                    // telque : 0 <= i <= 7 et i est impaire


                    if(board->board[x-1][y-1] != 0)
                    {
                        cont = false;
                    }
                    j++;
                }
                if((x == x2) && (y == y2))
                {
                    board->board[x2-1][y2-1] = board->board[x1-1][y1-1];
                    board->board[x1-1][y1-1] = 0;
                    //board->board[0][0] = 'r';
                    printf("etap2\n");
                }
                else
                {
                    printf("D�placement impossible!\n");
                }
            }
            else
            {
                printf("D�placement impossible!\n");
            }
            break;
    }
}


int main()
{
    int x1,y1,x2,y2;
    char c1,c2;

    configuration board;
    init(&board);
    affich(board);
    printf("x1:");
    scanf("%d", &x1);
    printf("y1:");
    scanf("%d",&y1);
    printf("x2:");
    scanf("%d",&x2);
    printf("y2:");
    scanf("%d",&y2);
    /*x1=c1-'a';
    x2=c2-'a';*/
    deplacerBlanc(&board, x1,y1,x2,y2);
    affich(board);
    printf("\nHello world!\n");
    return 0;
}
