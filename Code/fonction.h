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
#define HauteurFenetre 1000
#define FANTOME 4

void gestionEvenement(EvenementGfx evenement);
int AffichePage(int choixpage);
int Clique(int choixpage);
void accueil();
void pageJeu();
void pageOption();
void pageScore();
void Credits();
