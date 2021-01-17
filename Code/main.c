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
        if (choixpage == 0)
        {
            accueil();
            if (image != NULL)
            {
                ecrisImage((largeurFenetre() - image->largeurImage), hauteurFenetre() - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
            }
        }
        if (choixpage == 1)
        {
            pageJeu();
        }
        if (choixpage == 2)
        {
            pageOption();
        }
        if (choixpage == 3)
        {
            pageScore();
        }
        if (choixpage == 4)
        {
            Credits();
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
            //jouer
            if (choixpage == 0)
            {
                if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 10 * largeurFenetre() / 14) && (6.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 8 * hauteurFenetre() / 12))
                {
                    choixpage = 1;
                }
            }
            //options
            if (choixpage == 2)
            {
                if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (2.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 4 * hauteurFenetre() / 12))
                {
                    choixpage = 4;
                }
            }
            if (choixpage == 0)
            {
                if ((1.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 6 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
                {
                    choixpage = 2;
                }
            }
            //score
            if (choixpage == 0)
            {
                if ((8 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 12.5 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
                {
                    choixpage = 3;
                }
            }
            //quitter
            if (choixpage == 0)
            {
                if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
                {
                    termineBoucleEvenements();
                }
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
