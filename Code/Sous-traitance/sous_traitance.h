#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./tpGfx/GfxLib.h"
#include "./tpGfx/BmpLib.h"
#include "./tpGfx/ESLib.h"
#define LargeurFenetre 600
#define HauteurFenetre 800

typedef struct
{
    char pseudo[25];
    int score;
} Scoreboard;

typedef struct
{
    char text[12];
    bool z;
    int page;
    char tab[25][23];
    int score;
    int nb_fmange;
    int vies;
    int superpacgomme[4];
    Scoreboard sb[10];
} Donnees;

void afficheScore(Donnees *donnees);
void enregistre(Scoreboard *sb);
void cliqueScore(Donnees *donnees);
void classe(Scoreboard *sb);
void classement(Scoreboard *sb);