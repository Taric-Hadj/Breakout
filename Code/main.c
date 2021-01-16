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
      if(etatBoutonSouris()== GaucheAppuye) {
          if((6 * largeurFenetre() / 9<= abscisseSouris()) && (abscisseSouris() <= 3 * largeurFenetre() / 9) && (6 * hauteurFenetre() / 9<= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 9))
          { 
                pageJeu();
          }
      }
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
