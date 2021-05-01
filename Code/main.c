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
        donnees.score = 0;
        donnees.pacman.x = 220;
        donnees.pacman.y = 360;
        //monstre 1 vert
        donnees.monstre[0].x= 180;
        donnees.monstre[0].y= 220;
        donnees.monstre[0].orientation = 2;
        //monstre 2 violet
        donnees.monstre[1].x= 200;
        donnees.monstre[1].y= 220;
        donnees.monstre[1].orientation = 2;
        //monstre 3 orange
        donnees.monstre[2].x= 240;
        donnees.monstre[2].y= 220;
        donnees.monstre[2].orientation = 2;
        //monstre 4 blanc
        donnees.monstre[3].x= 260;
        donnees.monstre[3].y= 220;
        donnees.monstre[3].orientation = 2;

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
