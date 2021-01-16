#include"fonction.h"

int main(int argc, char **argv){
    initialiseGfx(argc, argv);
    prepareFenetreGraphique("PACMAN", LargeurFenetre, HauteurFenetre);
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
       accueil();

        break;

    case Clavier:
        switch (caractereClavier())
        {
        case 'q':
        case 'Q':
            termineBoucleEvenements();
            break;
        }
        break;

    case ClavierSpecial:
        break;

    case BoutonSouris:
      /*  switch (page())
        {
        case 0:
            break;

        case 1:
            break;

        }
        break;
*/
    case Souris:
        case Inactivite:
            break;

        case Redimensionnement:
            printf("Largeur : %d\t", largeurFenetre());
            printf("Hauteur : %d\n", hauteurFenetre());
            break;
        }
    }
