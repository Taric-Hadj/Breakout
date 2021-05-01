#include "Credits.h"

void pageCredits(Donnees * donnees)
{
     static DonneesImageRGB *image = NULL;
    image = lisBMPRGB("./images/isen2.bmp");
    if (image != NULL)
    {
        ecrisImage((10 * largeurFenetre() / 14 - image->largeurImage), hauteurFenetre() / 2 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
    }
    couleurCourante(255, 255, 0);
    afficheChaine("Taric", 40, 5.5 * largeurFenetre() / 14, 14 * hauteurFenetre() / 15);
    afficheChaine("Yannis", 40, 5.5 * largeurFenetre() / 14, 12.5 * hauteurFenetre() / 15);
    afficheChaine("Thibault", 40, 5.5 * largeurFenetre() / 14, 11 * hauteurFenetre() / 15);
    afficheChaine("Louise", 40, 5.5 * largeurFenetre() / 14, 9.5 * hauteurFenetre() / 15);
    afficheChaine("Fanny", 40, 5.5 * largeurFenetre() / 14, 8 * hauteurFenetre() / 15);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);


}


void CliqueCredits(Donnees * donnees)
{
     if(etatBoutonSouris() == GaucheAppuye)
    {
        if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
            { //retour
                donnees->page = 2;
            }
    }
}