#include "fonction.h"

int main(int argc, char **argv)
{
    initialiseGfx(argc, argv);
    prepareFenetreGraphique("PACMAN", LargeurFenetre, HauteurFenetre);
    lanceBoucleEvenements();
    return 0;
}
void gestionEvenement(EvenementGfx evenement)
{
    static int choixpage = 0;
    static DonneesImageRGB *image = NULL;
    switch (evenement)
    {
    case Initialisation:
        demandeTemporisation(20);
        image = lisBMPRGB("./images/pacman5.bmp");
        break;

    case Temporisation:
        rafraichisFenetre();
        break;

    case Affichage:
      choixpage =  AffichePage(choixpage);
      if (image != NULL)
         {
             ecrisImage((9*largeurFenetre()/14 - image->largeurImage), 10*hauteurFenetre()/12 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
        }

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
      choixpage =  Clique(choixpage);
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
