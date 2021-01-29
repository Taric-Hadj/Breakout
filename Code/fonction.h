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


void gestionEvenement(EvenementGfx evenement);
void AffichePage(int *choixpage, int *zone, char text[]);
void Clique(int *choixpage, int *zone);
void accueil();
void pageJeu();
void pageJeu1();
void pageOption();
void pageScore();
void Credits();
void ecrire(char text[12]);

