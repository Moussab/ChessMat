#ifndef EVALUATION_DES_PIECES_H_INCLUDED
#define EVALUATION_DES_PIECES_H_INCLUDED

// Pinalite pour le pion isole
int PawnIsolated = -100;

// Pour valoriser le deplacement des pions passes pour damer
int PawnPassed[8] = { 0, 50, 100, 200, 350, 600, 1000, 2000 };

// Pour valoriser une tour sur une colonne ouverte
int RookOpenFile = 100;

// Pour valoriser une tour sur une colonne semi ouverte
int RookSemiOpenFile = 50;

// Pour valoriser une reine sur une colonne ouverte
int QueenOpenFile = 50;

// Pour valoriser une reine sur une colonne semi ouverte
int QueenSemiOpenFile = 30;

// La valeur d'un pair de fous
int BishopPair = 300;

// L'evaluation de l'echequier
// Les positions sont comme suit : a1, b1, c1, ...
//                                 a2, b2, c2, ...
//Donc un pion sur d2 pour les blancs est evalue a -100, si il bouge a d4, il est a 200, ...

int PawnTable[64] = {
	0	    ,  	0   	,   0   	,   0   	,   0   	,  	0	    ,	0	    ,	0	    ,
	100	    ,  	100	    ,   0	    ,   -100    ,   -100    ,  	0	    ,	100	    ,	100	    ,
	50	    ,  	0	    ,  	0	    ,  	50	    ,  	50	    ,  	0	    ,	0	    ,	50	    ,
	0	    ,  	0	    ,  	100	    ,  	200	    ,  	200	    ,  	100	    ,	0	    ,	0	    ,
	50	    ,  	50	    ,  	50	    ,  	100	    ,  	100	    ,  	50	    ,	50	    ,	50	    ,
	100     ,  	100	    ,  	100	    ,  	200	    ,  	200	    ,  	100	    ,	100	    ,	100	    ,
	200	    ,   200 	,  	200	    ,  	300	    ,  	300	    ,  	200	    ,	200	    ,	200	    ,
	0	    ,  	0	    ,  	0	    ,  	0	    ,  	0	    ,  	0	    ,	0	    ,	0
};

int KnightTable[64] = {
	0   	,	-100	,	0	    ,	0	    ,	0	    ,	0	    ,	-100	,	0   	,
	0   	,	0	    ,	0	    ,	50	    ,	50	    ,	0	    ,	0	    ,	0   	,
	0	    ,	0	    ,	100	    ,	100	    ,	100	    ,	100	    ,	0	    ,	0	    ,
	0	    ,	50	    ,	100	    ,	200	    ,	200	    ,	100	    ,	50	    ,	0   	,
	50	    ,	100	    ,	150	    ,	200	    ,	200	    ,	150	    ,	100	    ,	50	    ,
	50	    ,  	100	    ,	100	    ,	200	    ,	200	    ,	100	    ,	100	    ,	50	    ,
	0	    ,	0	    ,	50	    ,	100	    ,	100	    ,	50	    ,	0	    ,	0   	,
	0	    ,	0	    ,	0	    ,	0	    ,	0	    ,	0	    ,	0	    ,	0
};

int BishopTable[64] = {
	0	    ,	0	    ,	-100	,	0	    ,	0	    ,	-100	,	0	    ,	0   	,
	0	    ,  	0	    ,	0	    ,	100	    ,	100	    ,	0	    ,	0	    ,	0	    ,
	0	    ,	0	    ,	100	    ,	150	    ,	150	    ,	100 	,	0	    ,	0	    ,
	0	    ,	100	    ,	150	    ,	200	    ,	200	    ,	150	    ,	100	    ,	0   	,
	0	    ,	100	    ,	150	    ,	200	    ,	200	    ,	150	    ,	100	    ,	0   	,
	0	    ,	0	    ,	100	    ,	150	    ,	150	    ,	100	    ,	0	    ,	0   	,
	0	    ,	0	    ,	0	    ,	100	    ,	100	    ,	0   	,	0	    ,	0   	,
	0	    ,	0   	,	0	    ,	0	    ,	0	    ,	0   	,	0	    ,	0
};

int RookTable[64] = {
    0   	,	0	    ,	50  	,	100	    ,	100	    ,	50	    ,	0	    ,	0	    ,
	0	    ,	0	    ,	50	    ,	100	    ,	100	    ,	50	    ,	0	    ,	0   	,
	0	    ,	0	    ,	50	    ,	100	    ,	100	    ,	50	    ,	0	    ,	0	    ,
	0	    ,	0	    ,	50	    ,	100	    ,	100	    ,	50  	,	0	    ,	0   	,
	0	    ,	0	    ,	50	    ,	100	    ,	100	    ,	50	    ,	0	    ,	0	    ,
	0	    ,	0	    ,	50	    ,	100	    ,	100	    ,	50	    ,	0	    ,	0	    ,
	250	    ,	250	    ,	250	    ,	250	    ,	250	    ,	250	    ,	250	    ,	250	    ,
	0	    ,	0	    ,	50	    ,	100	    ,	100	    ,	50	    ,	0	    ,	0
};

// l'evaluation du roi pendant la fin de partie
int KingE[64] = {
	-500    ,	-100	,	0   	,	0   	,	0   	,	0   	,	-100	,	-500	,
	-100    ,	0	    ,	100 	,	100	    ,	100	    ,	100	    ,	0   	,	-100	,
	0	    ,	100	    ,	200	    ,	200	    ,	200	    ,	200	    ,	100	    ,	0	    ,
	0	    ,	100	    ,	200	    ,	400	    ,	400	    ,	200	    ,	100	    ,	0	    ,
	0	    ,	100	    ,	200	    ,	400	    ,	400	    ,	200	    ,	100	    ,	0	    ,
	0	    ,	100	    ,	200	    ,	200	    ,	200	    ,	200	    ,	100	    ,	0	    ,
	-100    ,	0	    ,	100	    ,	100	    ,	100	    ,	100	    ,	0	    ,	-100	,
	-500 	,	-100	,	0	    ,	0	    ,	0	    ,	0	    ,	-100	,	-500
};

// L'evaluation du roi pendant l'ouverture, on donne la priorite au petit roque (plus sucurise)
int KingO[64] = {
	0	    ,	50	    ,	50	    ,	-100	,	-100	,	0	    ,	100	    ,	50	    ,
	-300	,	-300	,	-300	,	-300	,	-300	,	-300	,	-300	,	-300	,
	-500	,	-500	,	-500	,	-500	,	-500	,	-500	,	-500	,	-500	,
	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,
	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,
	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,
	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,
	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700	,	-700
};

#endif // EVALUATION_DES_PIECES_H_INCLUDED
