<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include "../tpGfx/GfxLib.h"
#include "../tpGfx/BmpLib.h"
#include "../tpGfx/ESLib.h"
#define LargeurFenetre 1000
#define HauteurFenetre 800
#define absBar1 1.5 * largeurFenetre() / 14
#define absBar2 8 * largeurFenetre() / 14


// INITIALISATION DES VARIABLES
int valCredits;
int valAffichage;
int valLangue;


// DEFINITION DES FONCTIONS
void gestionEvenement(EvenementGfx evenement);
void ecranNoir();
void ecranBlanc();
void afficheOptionsSF();
void afficheOptionsSA();
void afficheOptionsCF();
void afficheOptionsCA();
void afficheCreditsSF();
void afficheCreditsSA();
void afficheCreditsCF();
void afficheCreditsCA();
int affichage();
int langue();
int credits();
void retour();
=======
#include <stdlib.h>
#include <stdio.h>
#include "./tpGfx/GfxLib.h"
#include "./tpGfx/BmpLib.h"
#include "./tpGfx/ESLib.h"
#define LargeurFenetre 1000
#define HauteurFenetre 800
#define absBar1 1.5 * largeurFenetre() / 14
#define absBar2 8 * largeurFenetre() / 14


// INITIALISATION DES VARIABLES
int valCredits;
int valAffichage;
int valLangue;


// DEFINITION DES FONCTIONS
void gestionEvenement(EvenementGfx evenement);
void ecranNoir();
void ecranBlanc();
void afficheOptionsSF();
void afficheOptionsSA();
void afficheOptionsCF();
void afficheOptionsCA();
void afficheCreditsSF();
void afficheCreditsSA();
void afficheCreditsCF();
void afficheCreditsCA();
int affichage();
int langue();
int credits();
void retour();
>>>>>>> parent of b57315b (grains  +  pac man)
