#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "tpGfx/GfxLib.h"
#include "tpGfx/BmpLib.h"
#include "tpGfx/ESLib.h"
#define LargeurFenetre 800
#define HauteurFenetre 600
#define FANTOME 4

void GenMap();

typedef struct {
    int x;
    int y;
    int v;
    int d;
    int state;
} Personnage;

typedef struct {
        int score;
        char* pseudo;
        int classement;
}resultat;