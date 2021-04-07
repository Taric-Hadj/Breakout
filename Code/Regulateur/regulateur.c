#include "regulateur.h"

void choix(Donnees *donnees, Choix type)
{
    switch (donnees->page)
    {
    case 1:
        type.t1(donnees);
        break;

    case 2:
        type.t2(donnees);
        break;

    case 3:
        type.t3(donnees);
        break;

    case 4:
        type.t4(donnees);
        break;

    case 5:
        type.t5(donnees);
        break;

    case 6:
        type.t6(donnees);
        break;
    }
}

Choix tAffichage() { return (Choix){
    accueil, pageJeu, pageJeu1, pageOption, pageCredits
    // pageScore,
    
}; }

Choix tTemporisation() { return (Choix){}; }

Choix tClique() { return (Choix){
    CliqueMenu, CliqueJeu, CliqueJeu , CliqueOption, CliqueCredits}; }
