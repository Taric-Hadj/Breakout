#include <stdlib.h>
#include <stdio.h>
#include "../tpGfx/GfxLib.h"
#include "../tpGfx/BmpLib.h"
#include "options.h"

// Largeur et hauteur par defaut d'une image correspondant a nos criteres
#define LargeurFenetre 1000
#define HauteurFenetre 800


int main(int argc, char **argv)
{
    initialiseGfx(argc, argv);
    prepareFenetreGraphique("OPTIONS", LargeurFenetre, HauteurFenetre);
    printf("\n\n ------------oooooOOOooooo------------- \n");
    printf("|                                      | \n");
	printf("|                OPTIONS               | \n");
	printf("|                                      | \n");
	printf("|                                      | \n");
    lanceBoucleEvenements();

    return 0;
}


void gestionEvenement(EvenementGfx evenement)
{    		
    switch (evenement)
    {
	case Initialisation:
        demandeTemporisation(20);
        break;

	case Temporisation:
        rafraichisFenetre();
        break;

	case Affichage:
			
		if(valCredits == 0)
		{
			if(valAffichage == 0 || valAffichage == 1)
			{	
				if(valLangue == 0 || valLangue == 1)
				{
					afficheOptionsSF(); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS SOMBRE FRANCAIS
				}
				
				if(valLangue == 2)
				{
					afficheOptionsSA(); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS SOMBRE ANGLAIS
				}
			}
			
			if(valAffichage == 2)
			{
				if(valLangue == 0 || valLangue == 1)
				{
					afficheOptionsCF(); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS CLAIR FRANCAIS
				}
				
				if(valLangue == 2)
				{
					afficheOptionsCA(); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS CLAIR ANGLAIS
				}
			}
		}
		  
		if(valCredits == 1)
		{			
			if(valAffichage == 0 || valAffichage == 1)
			{	
				if(valLangue == 0 || valLangue == 1)
				{
					afficheCreditsSF(); // FONCTION AFFICHAGE PAGE MUTATEUR CREDITS SOMBRE FRANCAIS
				}
				
				if(valLangue == 2)
				{
					afficheCreditsSA(); // FONCTION AFFICHAGE PAGE MUTATEUR CREDITS SOMBRE ANGLAIS
				}
			}
			
			if(valAffichage == 2)
			{
				if(valLangue == 0 || valLangue == 1)
				{
					afficheCreditsCF(); // FONCTION AFFICHAGE PAGE MUTATEUR CREDITS CLAIR FRANCAIS
				}
				
				if(valLangue == 2)
				{
					afficheCreditsCA(); // FONCTION AFFICHAGE PAGE MUTATEUR CREDITS CLAIR ANGLAIS
				}
			}
		}
		break;

    case Clavier:
        break;

    case ClavierSpecial:
        break;

    case BoutonSouris:
		if (etatBoutonSouris() == GaucheAppuye)
		{
			valAffichage = affichage(); // OPTION SOMBRE OU CLAIR
			valLangue = langue(); // OPTION FRANCAIS OU ANGLAIS
			valCredits = credits(); // AFFICHAGE PAGE CREDITS
			retour(); // ARRET DU PROGRAMME
		}
        break;

    case Souris:
    case Inactivite:
        break;

    case Redimensionnement:
        break;
    }
}
