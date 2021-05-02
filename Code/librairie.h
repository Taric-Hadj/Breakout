
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
} Donnees;
#endif