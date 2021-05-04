#include "../librairie.h" 
#define absBar1 1.5 * largeurFenetre() / 14
#define absBar2 8 * largeurFenetre() / 14

void pageOption(Donnees * donnees);
void CliqueOption(Donnees * donnees);


// INITIALISATION DES VARIABLES

// DEFINITION DES FONCTIONS
void gestionEvenement(EvenementGfx evenement);
void ecranNoir();
void ecranBlanc();
void afficheOptionsSF();
void afficheOptionsSA();
void afficheOptionsCF();
void afficheOptionsCA();
int affichage(int valAffichage);
int langue(int valLangue);
int credits(int valCredits);
void retour(Donnees *donnees);
