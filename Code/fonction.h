#include "librairie.h"


void GenMap();
void Map(char map[32][29], int x, int y);
int min(int a, int b);
int rand_a_b(int a, int b);
double vabs(double val);
void gestionEvenement(EvenementGfx evenement);
void AffichePage(int *choixpage, int *zone, char text[]);
void Clique(int *choixpage, int *zone);
void accueil(Donnees *donnees);
void pageJeu(Donnees *donnees);
void pageJeu1(Donnees *donnees);
void pageOption(Donnees *donnees);
void pageScore(Donnees *donnees);
void Credits(Donnees *donnees);
void ecrire(char text[12]);
void fraise(float x, float y, float taille);
void grain(float x, float y, int coefx, int coefy, float taille, int divx, int divy, int fruit);
void banane(float x, float y, float taille);
void orange(float x, float y, float taille);
void cerise(float x, float y, float taille);
void arrondiAngle(int x, int y, int taille, int orientation);
void arrondiBout(int x, int y, int taille, int orientation);
