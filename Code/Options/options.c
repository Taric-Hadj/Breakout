#include "options.h"


// FONCTION AFFICHAGE PAGE OPTION SOMBRE FRANCAIS
void afficheOptionsSF()
{
	// FOND NOIR
    effaceFenetre(0, 0, 0);
    
    // TEXTE OPTIONS
    couleurCourante(255, 255, 255);
    epaisseurDeTrait(6);
    afficheChaine("OPTIONS", 60, 5 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);
    
    // RECTANGLE AFFICHAGE
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 9.5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 7.95 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("AFFICHAGE", 40, 2.1 * largeurFenetre() / 14, 8.44 * hauteurFenetre() / 12);
    
    // RECTANGLE SOMBRE
    couleurCourante(255, 215, 0);
    rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 8 * largeurFenetre() / 14, 3.2 * hauteurFenetre() / 6);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("SOMBRE", 30, 15.15 * largeurFenetre() / 40, 6.75 * hauteurFenetre() / 12);
    
    // RECTANGLE CLAIR
    couleurCourante(255, 215, 0);
    rectangle(9 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.2 * hauteurFenetre() / 6);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("CLAIR", 30, 29 * largeurFenetre() / 40, 6.75 * hauteurFenetre() / 12);
    
    // RECTANGLE FRANCAIS
    couleurCourante(255, 215, 0);
    rectangle(4.5 * largeurFenetre() / 14, 3.65 * hauteurFenetre() / 12, 8 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("FRANCAIS", 30, 14.9 * largeurFenetre() / 40, 2.9 * hauteurFenetre() / 12);
    
    // RECTANGLE ENGLISH
    couleurCourante(255, 215, 0);
    rectangle(9 * largeurFenetre() / 14, 3.65 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("ENGLISH", 30, 28.2 * largeurFenetre() / 40, 2.9 * hauteurFenetre() / 12);
    
    // RECTANGLE LANGUE
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 5.65 * hauteurFenetre() / 12, 6.0 * largeurFenetre() / 14, 2.05 * hauteurFenetre() / 6);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("LANGUE", 40, 2.5 * largeurFenetre() / 14, 4.6 * hauteurFenetre() / 12);
    
    // RECTANGLE CREDITS
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 1.8 * hauteurFenetre() / 12, 6.0 * largeurFenetre() / 14, 0.25 * hauteurFenetre() / 6);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("CREDITS", 40, 2.5 * largeurFenetre() / 14, 8.8 * hauteurFenetre() / 120);
   
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(3 * largeurFenetre() / 4, 0, largeurFenetre(), 1.2 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("RETOUR", 40, 31.7 * largeurFenetre() / 40, 0.25 * hauteurFenetre() / 10);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE OPTIONS SOMBRE ANGLAIS
void afficheOptionsSA()
{
	// FOND NOIR
    effaceFenetre(0, 0, 0);
    
    // TEXTE OPTIONS
    couleurCourante(255, 255, 255);
    epaisseurDeTrait(6);
    afficheChaine("OPTIONS", 60, 5 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);	

    // RECTANGLE AFFICHAGE
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 9.5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 7.95 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("DISPLAY", 40, 2.5 * largeurFenetre() / 14, 8.44 * hauteurFenetre() / 12);
    
    // RECTANGLE SOMBRE
    couleurCourante(255, 215, 0);
    rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 8 * largeurFenetre() / 14, 3.2 * hauteurFenetre() / 6);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("DARK", 30, 16 * largeurFenetre() / 40, 6.75 * hauteurFenetre() / 12);
    
    // RECTANGLE CLAIR
    couleurCourante(255, 215, 0);
    rectangle(9 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.2 * hauteurFenetre() / 6);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("LIGHT", 30, 29 * largeurFenetre() / 40, 6.75 * hauteurFenetre() / 12);
    
    // RECTANGLE FRANCAIS
    couleurCourante(255, 215, 0);
    rectangle(4.5 * largeurFenetre() / 14, 3.65 * hauteurFenetre() / 12, 8 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("FRANCAIS", 30, 14.9 * largeurFenetre() / 40, 2.9 * hauteurFenetre() / 12);
    
    // RECTANGLE ENGLISH
    couleurCourante(255, 215, 0);
    rectangle(9 * largeurFenetre() / 14, 3.65 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("ENGLISH", 30, 28.2 * largeurFenetre() / 40, 2.9 * hauteurFenetre() / 12);
    
    // RECTANGLE LANGUE
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 5.65 * hauteurFenetre() / 12, 6.0 * largeurFenetre() / 14, 2.05 * hauteurFenetre() / 6);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("LANGUAGE", 40, 2.18 * largeurFenetre() / 14, 4.6 * hauteurFenetre() / 12);
    
    // RECTANGLE CREDITS
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 1.8 * hauteurFenetre() / 12, 6.0 * largeurFenetre() / 14, 0.25 * hauteurFenetre() / 6);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("CREDITS", 40, 2.5 * largeurFenetre() / 14, 8.8 * hauteurFenetre() / 120);
   
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(3 * largeurFenetre() / 4, 0, largeurFenetre(), 1.2 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("BACK", 40, 32.8 * largeurFenetre() / 40, 0.28 * hauteurFenetre() / 10);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE OPTION CLAIR FRANCAIS
void afficheOptionsCF()
{
	// FOND BLANC
    effaceFenetre(255, 248, 240);
    
    // TEXTE OPTIONS
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(6);
    afficheChaine("OPTIONS", 60, 5 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);

    // RECTANGLE AFFICHAGE
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 9.5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 7.95 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("AFFICHAGE", 40, 2.1 * largeurFenetre() / 14, 8.44 * hauteurFenetre() / 12);
    
    // RECTANGLE SOMBRE
    couleurCourante(255, 215, 0);
    rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 8 * largeurFenetre() / 14, 3.2 * hauteurFenetre() / 6);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("SOMBRE", 30, 15.15 * largeurFenetre() / 40, 6.75 * hauteurFenetre() / 12);
    
    // RECTANGLE CLAIR
    couleurCourante(255, 215, 0);
    rectangle(9 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.2 * hauteurFenetre() / 6);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("CLAIR", 30, 29 * largeurFenetre() / 40, 6.75 * hauteurFenetre() / 12);
    
    // RECTANGLE FRANCAIS
    couleurCourante(255, 215, 0);
    rectangle(4.5 * largeurFenetre() / 14, 3.65 * hauteurFenetre() / 12, 8 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("FRANCAIS", 30, 14.9 * largeurFenetre() / 40, 2.9 * hauteurFenetre() / 12);
    
    // RECTANGLE ENGLISH
    couleurCourante(255, 215, 0);
    rectangle(9 * largeurFenetre() / 14, 3.65 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("ENGLISH", 30, 28.2 * largeurFenetre() / 40, 2.9 * hauteurFenetre() / 12);
    
    // RECTANGLE LANGUE
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 5.65 * hauteurFenetre() / 12, 6.0 * largeurFenetre() / 14, 2.05 * hauteurFenetre() / 6);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("LANGUE", 40, 2.5 * largeurFenetre() / 14, 4.6 * hauteurFenetre() / 12);
    
    // RECTANGLE CREDITS
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 1.8 * hauteurFenetre() / 12, 6.0 * largeurFenetre() / 14, 0.25 * hauteurFenetre() / 6);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("CREDITS", 40, 2.5 * largeurFenetre() / 14, 8.8 * hauteurFenetre() / 120);
   
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(3 * largeurFenetre() / 4, 0, largeurFenetre(), 1.2 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("RETOUR", 40, 31.7 * largeurFenetre() / 40, 0.25 * hauteurFenetre() / 10);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE OPTIONS CLAIR ANGLAIS
void afficheOptionsCA()
{
	// FOND BLANC
    effaceFenetre(255, 248, 240);
    
    // TEXTE OPTIONS
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(6);
    afficheChaine("OPTIONS", 60, 5 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);	

    // RECTANGLE AFFICHAGE
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 9.5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 7.95 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("DISPLAY", 40, 2.5 * largeurFenetre() / 14, 8.44 * hauteurFenetre() / 12);
    
    // RECTANGLE SOMBRE
    couleurCourante(255, 215, 0);
    rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 8 * largeurFenetre() / 14, 3.2 * hauteurFenetre() / 6);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("DARK", 30, 16 * largeurFenetre() / 40, 6.75 * hauteurFenetre() / 12);
    
    // RECTANGLE CLAIR
    couleurCourante(255, 215, 0);
    rectangle(9 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.2 * hauteurFenetre() / 6);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("LIGHT", 30, 29 * largeurFenetre() / 40, 6.75 * hauteurFenetre() / 12);
    
    // RECTANGLE FRANCAIS
    couleurCourante(255, 215, 0);
    rectangle(4.5 * largeurFenetre() / 14, 3.65 * hauteurFenetre() / 12, 8 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("FRANCAIS", 30, 14.9 * largeurFenetre() / 40, 2.9 * hauteurFenetre() / 12);
    
    // RECTANGLE ENGLISH
    couleurCourante(255, 215, 0);
    rectangle(9 * largeurFenetre() / 14, 3.65 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	couleurCourante(220, 116, 48);
    afficheChaine("ENGLISH", 30, 28.2 * largeurFenetre() / 40, 2.9 * hauteurFenetre() / 12);
    
    // RECTANGLE LANGUE
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 5.65 * hauteurFenetre() / 12, 6.0 * largeurFenetre() / 14, 2.05 * hauteurFenetre() / 6);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("LANGUAGE", 40, 2.18 * largeurFenetre() / 14, 4.6 * hauteurFenetre() / 12);
    
    // RECTANGLE CREDITS
    couleurCourante(214, 95, 0);
    rectangle(1.5 * largeurFenetre() / 14, 1.8 * hauteurFenetre() / 12, 6.0 * largeurFenetre() / 14, 0.25 * hauteurFenetre() / 6);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("CREDITS", 40, 2.5 * largeurFenetre() / 14, 8.8 * hauteurFenetre() / 120);
   
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(3 * largeurFenetre() / 4, 0, largeurFenetre(), 1.2 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("BACK", 40, 32.8 * largeurFenetre() / 40, 0.28 * hauteurFenetre() / 10);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE CREDITS SOMBRE FRANCAIS
void afficheCreditsSF()
{
	// FOND NOIR
    effaceFenetre(0, 0, 0);
    
    // TEXTE CREDITS
    couleurCourante(255, 255, 255);
    epaisseurDeTrait(6);
    afficheChaine("CREDITS", 60, 5 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);
    
    // NOMS
    couleurCourante(255, 255, 150);
    epaisseurDeTrait(4);
    afficheChaine("Fanny AUPHAN", 50, 12.5 * largeurFenetre() / 40, 7 * hauteurFenetre() / 10);
    afficheChaine("Louise BOISSON", 50, 12 * largeurFenetre() / 40, 6 * hauteurFenetre() / 10);
    afficheChaine("Yannis MOUTON", 50, 12 * largeurFenetre() / 40, 5 * hauteurFenetre() / 10);
    afficheChaine("Taric HADJ", 50, 14 * largeurFenetre() / 40, 4 * hauteurFenetre() / 10);
    afficheChaine("Thibault VELLY", 50, 12.6 * largeurFenetre() / 40, 3 * hauteurFenetre() / 10);
    
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(3 * largeurFenetre() / 4, 0, largeurFenetre(), 1.2 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("RETOUR", 40, 31.7 * largeurFenetre() / 40, 0.25 * hauteurFenetre() / 10);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE CREDITS SOMBRE ANGLAIS
void afficheCreditsSA()
{
	// FOND NOIR
    effaceFenetre(0, 0, 0);
    
    // TEXTE CREDITS
    couleurCourante(255, 255, 255);
    epaisseurDeTrait(6);
    afficheChaine("CREDITS", 60, 5 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);
    
    // NOMS
    couleurCourante(255, 255, 150);
    epaisseurDeTrait(4);
    afficheChaine("Fanny AUPHAN", 50, 12.5 * largeurFenetre() / 40, 7 * hauteurFenetre() / 10);
    afficheChaine("Louise BOISSON", 50, 12 * largeurFenetre() / 40, 6 * hauteurFenetre() / 10);
    afficheChaine("Yannis MOUTON", 50, 12 * largeurFenetre() / 40, 5 * hauteurFenetre() / 10);
    afficheChaine("Taric HADJ", 50, 14 * largeurFenetre() / 40, 4 * hauteurFenetre() / 10);
    afficheChaine("Thibault VELLY", 50, 12.6 * largeurFenetre() / 40, 3 * hauteurFenetre() / 10);
    
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(3 * largeurFenetre() / 4, 0, largeurFenetre(), 1.2 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("BACK", 40, 32.8 * largeurFenetre() / 40, 0.28 * hauteurFenetre() / 10);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE CREDITS CLAIR FRANCAIS
void afficheCreditsCF()
{
	// FOND BLANC
    effaceFenetre(255, 248, 240);
    
    // TEXTE CREDITS
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(6);
    afficheChaine("CREDITS", 60, 5 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);
    
    // NOMS
    couleurCourante(126, 51, 0);
    epaisseurDeTrait(4);
    afficheChaine("Fanny AUPHAN", 50, 12.5 * largeurFenetre() / 40, 7 * hauteurFenetre() / 10);
    afficheChaine("Louise BOISSON", 50, 12 * largeurFenetre() / 40, 6 * hauteurFenetre() / 10);
    afficheChaine("Yannis MOUTON", 50, 12 * largeurFenetre() / 40, 5 * hauteurFenetre() / 10);
    afficheChaine("Taric HADJ", 50, 14 * largeurFenetre() / 40, 4 * hauteurFenetre() / 10);
    afficheChaine("Thibault VELLY", 50, 12.6 * largeurFenetre() / 40, 3 * hauteurFenetre() / 10);
    
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(3 * largeurFenetre() / 4, 0, largeurFenetre(), 1.2 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("RETOUR", 40, 31.7 * largeurFenetre() / 40, 0.25 * hauteurFenetre() / 10);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE CREDITS CLAIR ANGLAIS
void afficheCreditsCA()
{
	// FOND BLANC
    effaceFenetre(255, 248, 240);
    
    // TEXTE CREDITS
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(6);
    afficheChaine("CREDITS", 60, 5.5 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);
    
    // NOMS
    couleurCourante(126, 51, 0);
    epaisseurDeTrait(4);
    afficheChaine("Fanny AUPHAN", 50, 12.5 * largeurFenetre() / 40, 7 * hauteurFenetre() / 10);
    afficheChaine("Louise BOISSON", 50, 12 * largeurFenetre() / 40, 6 * hauteurFenetre() / 10);
    afficheChaine("Yannis MOUTON", 50, 12 * largeurFenetre() / 40, 5 * hauteurFenetre() / 10);
    afficheChaine("Taric HADJ", 50, 14 * largeurFenetre() / 40, 4 * hauteurFenetre() / 10);
    afficheChaine("Thibault VELLY", 50, 12.6 * largeurFenetre() / 40, 3 * hauteurFenetre() / 10);
    
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(3 * largeurFenetre() / 4, 0, largeurFenetre(), 1.2 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("BACK", 40, 32.8 * largeurFenetre() / 40, 0.28 * hauteurFenetre() / 10);
    couleurCourante(150,56,53);
}


// FONCTION TOUCHE AFFICHAGE
int affichage()
{	
	if(abscisseSouris() >= (4.5 * largeurFenetre() / 14)  && abscisseSouris() <= (8 * largeurFenetre() / 14) && ordonneeSouris() >= 3.2 * hauteurFenetre() / 6 && ordonneeSouris() <= (7.5 * hauteurFenetre() / 12))
	{	
		printf("|           Affichage sombre           |\n");
	    printf("|                                      | \n");
		valAffichage = 1;
	}
	
	if(abscisseSouris() >= (9 * largeurFenetre() / 14)  && abscisseSouris() <= (12.5 * largeurFenetre() / 14) && ordonneeSouris() >= 3.2 * hauteurFenetre() / 6 && ordonneeSouris() <= (7.5 * hauteurFenetre() / 12))
	{
		printf("|           Affichage clair            |\n");
	    printf("|                                      | \n");
		valAffichage = 2;
	}
	
	return valAffichage;
}


// FONCTION TOUCHE LANGUE
int langue()
{
	if(abscisseSouris() >= (4.5 * largeurFenetre() / 14)  && abscisseSouris() <= (8 * largeurFenetre() / 14) && ordonneeSouris() >= (2.5 * hauteurFenetre() / 12) && ordonneeSouris() <= (3.65 * hauteurFenetre() / 12))
	{	
		printf("|               Français               |\n");
	    printf("|                                      | \n");
		valLangue = 1;
	}
	
	if(abscisseSouris() >= (9 * largeurFenetre() / 14)  && abscisseSouris() <= (12.5 * largeurFenetre() / 14) && ordonneeSouris() >= (2.5 * hauteurFenetre() / 12) && ordonneeSouris() <= 3.65 * hauteurFenetre() / 12)
	{	
		printf("|                Anglais               |\n");
	    printf("|                                      | \n");
		valLangue = 2;
	}
	
	return valLangue;
}


// FONCTION TOUCHE CREDITS
int credits()
{	
	if(abscisseSouris() >= (1.5 * largeurFenetre() / 14)  && abscisseSouris() <= (6 * largeurFenetre() / 14) && ordonneeSouris() >= (0.25 * hauteurFenetre() / 6) && ordonneeSouris() <= (1.8 * hauteurFenetre() / 12))
	{	
		valCredits = 1;	
	}
	
	return valCredits;
}


// FONCTION TOUCHE RETOUR
void retour()
{
	if(abscisseSouris() >= (3 * largeurFenetre() / 4)  && abscisseSouris() <= (largeurFenetre()) && ordonneeSouris() >= 0 && ordonneeSouris() <= (1.2 * hauteurFenetre() / 12))
	{
		printf(" ------------oooooOOOooooo------------- \n\n");
		termineBoucleEvenements();
	}
}
