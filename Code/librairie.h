
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include "tpGfx/GfxLib.h"
#include "tpGfx/BmpLib.h"
#include "tpGfx/ESLib.h"
#define LargeurFenetre 600
#define HauteurFenetre 800
#define FANTOME 4
#ifndef STRUCT
#define STRUCT
#define Ux largeurFenetre()/100
#define Uy hauteurFenetre()/100
#define grilleAide \
for(int i = 1 ; i<100 ; i++)\
	{\
		char a[10] = "";\
		couleurCourante(255, 255, 255);\
		epaisseurDeTrait(1);\
		sprintf(a, "%d", i);\
		afficheChaine(a, 5, i*Ux, Uy/2);\
		afficheChaine(a, 5, Ux/2, Uy*i);\
		ligne(i*Ux, 0, i*Ux, 100*Uy);\
		ligne(0, i*Uy, 100*Ux, i*Uy);\
	}\

typedef struct
{
    int red;
    int green;
    int blue;
} Color;

typedef struct
{
    float x;
    float y;
    int orientation;
    char caractere;
    int bonus;
} Pacman;

typedef struct
{
    float x;
    float y;
    float v;
    int tmp;
    int orientation;
    int malus;
} Monstre;

typedef struct
{
    char text[12];
    bool z;
    int page;
    char tab[25][23];
    Pacman pacman;
    Monstre monstre[4];
    int score;
    int nb_fmange;
    int vies;
    int superpacgomme[4];
    
int valCredits;
int valAffichage;
int valLangue;

} Donnees;
#endif
