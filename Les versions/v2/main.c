#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Board.h"
#include "initialisation.c"
#include "affichage.c"

int main()
{
    configuration board;
    init(&board);
    affich(board);
    printf("Hello world!\n");
    return 0;
}
