#include "Credits.h"

void pageCredits(Donnees * donnees)
{
    if(donnees->valAffichage == 0 || donnees->valAffichage == 1)
			{	
				if(donnees->valLangue == 0 || donnees->valLangue == 1)
				{
					afficheCreditsSF(); // FONCTION AFFICHAGE PAGE MUTATEUR CREDITS SOMBRE FRANCAIS
				}
				
				if(donnees->valLangue == 2)
				{
					afficheCreditsSA(); // FONCTION AFFICHAGE PAGE MUTATEUR CREDITS SOMBRE ANGLAIS
				}
			}
			
			if(donnees->valAffichage == 2)
			{
				if(donnees->valLangue == 0 || donnees->valLangue == 1)
				{
					afficheCreditsCF(); // FONCTION AFFICHAGE PAGE MUTATEUR CREDITS CLAIR FRANCAIS
				}
				
				if(donnees->valLangue == 2)
				{
					afficheCreditsCA(); // FONCTION AFFICHAGE PAGE MUTATEUR CREDITS CLAIR ANGLAIS
				}
			}
    /* static DonneesImageRGB *image = NULL;
    image = lisBMPRGB("./images/isen2.bmp");
    if (image != NULL)
    {
        ecrisImage((10 * largeurFenetre() / 14 - image->largeurImage), hauteurFenetre() / 2 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
    }
    couleurCourante(255, 255, 0);
    afficheChaine("Taric", 40, 5.5 * largeurFenetre() / 14, 14 * hauteurFenetre() / 15);
    afficheChaine("Yannis", 40, 5.5 * largeurFenetre() / 14, 12.5 * hauteurFenetre() / 15);
    afficheChaine("Thibault", 40, 5.5 * largeurFenetre() / 14, 11 * hauteurFenetre() / 15);
    afficheChaine("Louise", 40, 5.5 * largeurFenetre() / 14, 9.5 * hauteurFenetre() / 15);
    afficheChaine("Fanny", 40, 5.5 * largeurFenetre() / 14, 8 * hauteurFenetre() / 15);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
*/

}


// FONCTION AFFICHAGE PAGE CREDITS SOMBRE FRANCAIS
void afficheCreditsSF()
{
	// FOND NOIR
    effaceFenetre(0, 0, 0);
    
    // TEXTE CREDITS
    couleurCourante(255, 255, 255);
    epaisseurDeTrait(6);
    afficheChaine("CREDITS", 60, 43*Ux, 88*Uy);
    
    // NOMS
    couleurCourante(255, 255, 150);
    epaisseurDeTrait(4);
    afficheChaine("Fanny AUPHAN", 50, 10 * largeurFenetre() / 40, 7 * hauteurFenetre() / 10);
    afficheChaine("Louise BOISSON", 50, 10 * largeurFenetre() / 40, 6 * hauteurFenetre() / 10);
    afficheChaine("Yannis MOUTON", 50, 10 * largeurFenetre() / 40, 5 * hauteurFenetre() / 10);
    afficheChaine("Taric HADJ", 50, 10 * largeurFenetre() / 40, 4 * hauteurFenetre() / 10);
    afficheChaine("Thibault VELLY", 50, 10 * largeurFenetre() / 40, 3 * hauteurFenetre() / 10);
    
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(75*Ux, 10*Uy, 100*Ux, 0*Uy);
    epaisseurDeTrait(3);
    couleurCourante(255, 255, 255);
    afficheChaine("RETOUR", 20, 82.5*Ux, 3*Uy);
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
    afficheChaine("Fanny AUPHAN", 50, 10 * largeurFenetre() / 40, 7 * hauteurFenetre() / 10);
    afficheChaine("Louise BOISSON", 50, 10 * largeurFenetre() / 40, 6 * hauteurFenetre() / 10);
    afficheChaine("Yannis MOUTON", 50, 10 * largeurFenetre() / 40, 5 * hauteurFenetre() / 10);
    afficheChaine("Taric HADJ", 50, 10 * largeurFenetre() / 40, 4 * hauteurFenetre() / 10);
    afficheChaine("Thibault VELLY", 50, 10 * largeurFenetre() / 40, 3 * hauteurFenetre() / 10);
    
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(75*Ux, 10*Uy, 100*Ux, 0*Uy);
    epaisseurDeTrait(3);
    couleurCourante(255, 255, 255);
    afficheChaine("BACK", 20, 82.5*Ux, 3*Uy);
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
    afficheChaine("Fanny AUPHAN", 50, 10 * largeurFenetre() / 40, 7 * hauteurFenetre() / 10);
    afficheChaine("Louise BOISSON", 50, 10 * largeurFenetre() / 40, 6 * hauteurFenetre() / 10);
    afficheChaine("Yannis MOUTON", 50, 10 * largeurFenetre() / 40, 5 * hauteurFenetre() / 10);
    afficheChaine("Taric HADJ", 50, 10 * largeurFenetre() / 40, 4 * hauteurFenetre() / 10);
    afficheChaine("Thibault VELLY", 50, 10 * largeurFenetre() / 40, 3 * hauteurFenetre() / 10);
    
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(75*Ux, 10*Uy, 100*Ux, 0*Uy);
    epaisseurDeTrait(3);
    couleurCourante(255, 255, 255);
    afficheChaine("RETOUR", 20, 82.5*Ux, 3*Uy);
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
    afficheChaine("Fanny AUPHAN", 50, 10 * largeurFenetre() / 40, 7 * hauteurFenetre() / 10);
    afficheChaine("Louise BOISSON", 50, 10 * largeurFenetre() / 40, 6 * hauteurFenetre() / 10);
    afficheChaine("Yannis MOUTON", 50, 10 * largeurFenetre() / 40, 5 * hauteurFenetre() / 10);
    afficheChaine("Taric HADJ", 50, 10 * largeurFenetre() / 40, 4 * hauteurFenetre() / 10);
    afficheChaine("Thibault VELLY", 50, 10 * largeurFenetre() / 40, 3 * hauteurFenetre() / 10);
    
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(75*Ux, 10*Uy, 100*Ux, 0*Uy);
    epaisseurDeTrait(3);
    couleurCourante(255, 255, 255);
    afficheChaine("BACK",20, 82.5*Ux, 3*Uy);
    couleurCourante(150,56,53);
}

void CliqueCredits(Donnees * donnees)
{
     if(etatBoutonSouris() == GaucheAppuye)
    {
        if ((75*Ux <= abscisseSouris()) && (abscisseSouris() <= 100*Ux) && (0*Uy <= ordonneeSouris()) && (ordonneeSouris() <= 10*Uy))
            { //retour
                donnees->page = 4;
            }
    }
}
