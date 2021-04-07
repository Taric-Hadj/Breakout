#include "menu.h"

void accueil(Donnees *donnees)
{
    static DonneesImageRGB *image = NULL;
    image = lisBMPRGB("./images/pacman5.bmp");
    if (image != NULL)
    {
        ecrisImage((9 * largeurFenetre() / 14 - image->largeurImage), 10 * hauteurFenetre() / 12 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
    }
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(6);
    afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10.5 * hauteurFenetre() / 12);
    //
    couleurCourante(20, 20, 20);
    rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 10 * largeurFenetre() / 14, 6 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 0);
    afficheChaine("Jouer", 60, 5.5 * largeurFenetre() / 14, 6.5 * hauteurFenetre() / 12);
    //
    couleurCourante(20, 20, 20);
    rectangle(1.5 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(3);
    afficheChaine("Options", 40, 2 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
    //
    couleurCourante(20, 20, 20);
    rectangle(8 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(3);
    afficheChaine("Score", 40, 9 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
    //
    couleurCourante(20, 20, 20);
    rectangle(4.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(3);
    afficheChaine("Quitter", 40, 5.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
}

void CliqueMenu(Donnees *donnees)
{
    if (etatBoutonSouris() == GaucheAppuye)
    {

        //jouer
        
            if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 10 * largeurFenetre() / 14) && (6.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 8 * hauteurFenetre() / 12))
            {
                donnees->page = 2;
            }

            //score
            if ((8 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 12.5 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
            {
                donnees->page = 4;
            }
            //quitter

            if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
            {
                termineBoucleEvenements();
            }
            //options
            if ((1.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 6 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
            {
                donnees->page = 4;
            }
        }
    }