#include <stdlib.h>
#include <stdio.h>
#include "./tpGfx/GfxLib.h"
#include "./tpGfx/BmpLib.h"
#include "sous_traitance.h"

// Largeur et hauteur par defaut d'une image correspondant a nos criteres

int main(int argc, char **argv)
{
    initialiseGfx(argc, argv);
    prepareFenetreGraphique("Score", LargeurFenetre, HauteurFenetre);
    lanceBoucleEvenements();

    return 0;
}

void gestionEvenement(EvenementGfx evenement)
{
    static Donnees donnees;

    switch (evenement)
    {
    case Initialisation:
        strcpy(donnees.sb[0].pseudo, "loic");
        donnees.sb[0].score = 12468;
        
        strcpy(donnees.sb[1].pseudo, "taric");
        donnees.sb[1].score = 87531;

        strcpy(donnees.sb[2].pseudo, "melvin");
        donnees.sb[2].score = 8532;

        strcpy(donnees.sb[3].pseudo, "Thibault");
        donnees.sb[3].score = 95418;

        strcpy(donnees.sb[4].pseudo, "Fanny");
        donnees.sb[4].score = 54540;

        strcpy(donnees.sb[5].pseudo, "Louise");
        donnees.sb[5].score = 45231;

        strcpy(donnees.sb[6].pseudo, "Yannis");
        donnees.sb[6].score = 23452;

        strcpy(donnees.sb[7].pseudo, "Héloïse");
        donnees.sb[7].score = 19783;

        strcpy(donnees.sb[8].pseudo, "William");
        donnees.sb[8].score = 4213;

        strcpy(donnees.sb[9].pseudo, "Marine");
        donnees.sb[9].score = 1598;
        demandeTemporisation(20);
        break;

    case Temporisation:
        rafraichisFenetre();
        break;

    case Affichage:
        afficheScore(&donnees);
        break;

    case Clavier:
        break;

    case ClavierSpecial:
        break;

    case BoutonSouris:
        cliqueScore(&donnees);
        break;

    case Souris:
    case Inactivite:
        break;

    case Redimensionnement:
        break;
    }
}
