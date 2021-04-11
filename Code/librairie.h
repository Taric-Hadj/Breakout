#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
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
    char text[12];
    int z;
    int page;
    int tab[25][45];
} Donnees;

#endif