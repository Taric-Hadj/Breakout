#include "./Regulateur/regulateur.h"

int main(int argc, char **argv)
{
    initialiseGfx(argc, argv);
    prepareFenetreGraphique("PACMAN", LargeurFenetre, HauteurFenetre);
    lanceBoucleEvenements();
    return 0;
}
void gestionEvenement(EvenementGfx evenement)
{
    static Donnees donnees;

    switch (evenement)
    {
    case Initialisation:
        donnees.page = 1;
        donnees.pacman.x = 220;
        donnees.pacman.y = 360;
        demandeTemporisation(20);

        break;

    case Temporisation:
        rafraichisFenetre();
        choix(&donnees, tTempo());

        break;

    case Affichage:
        effaceFenetre(0, 0, 0);
        choix(&donnees, tAffichage());
        break;

    case Clavier:
        choix(&donnees, tClavier());
        // if(*choixpage == 1){

        // if(*zone==1){
        //     ecrire(text);
        //     printf("test");
        // 		}

        // }

        break;

    case ClavierSpecial:

        printf("ASCII %d\n", toucheClavier());

        break;

    case BoutonSouris:
        choix(&donnees, tClique());
        break;

    case Souris:
    case Inactivite:
        break;

    case Redimensionnement:
        printf("Largeur : %d\t", largeurFenetre());
        printf("Hauteur : %d\n", hauteurFenetre());
        break;
    }
}
