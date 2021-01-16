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
        image = lisBMPRGB("./images/pacman_logo.bmp");
        break;

    case Temporisation:
        rafraichisFenetre();
        break;

    case Affichage:
        if (choixpage == 0) {
                accueil();
                if (image != NULL){ 
				ecrisImage((largeurFenetre()-image->largeurImage),hauteurFenetre()-image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
                }
        }

            if (choixpage == 1)
            {
                pageJeu();
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
        if (etatBoutonSouris() == GaucheAppuye)
        {
            if ((3 * largeurFenetre() / 9<= abscisseSouris()) && (abscisseSouris() <= 6 * largeurFenetre() / 9 ) && (5 * hauteurFenetre() / 9 <= ordonneeSouris()) && (ordonneeSouris() <=6 * hauteurFenetre() / 9 ))
            {
                choixpage = 1;
            }
             if ((3 * largeurFenetre() / 9<= abscisseSouris()) && (abscisseSouris() <= 6 * largeurFenetre() / 10 ) && (6 * hauteurFenetre() / 50 <= ordonneeSouris()) && (ordonneeSouris() <=5 * hauteurFenetre() / 25 ))
            {
                termineBoucleEvenements();
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
