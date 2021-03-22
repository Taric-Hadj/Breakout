#include "jeu.h"

void pageJeu(Donnees *donnees)
{
    static DonneesImageRGB *image = NULL;
    image = lisBMPRGB("./images/pacman5.bmp");
    if (image != NULL)
    {
        ecrisImage((9 * largeurFenetre() / 14 - image->largeurImage), 10 * hauteurFenetre() / 12 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
    }
    effaceFenetre(0, 0, 0);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(6);
    afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10.5 * hauteurFenetre() / 12);
    epaisseurDeTrait(3);
    couleurCourante(20, 20, 20);
    rectangle(4.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Valider", 40, 5.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    afficheChaine("Entrer votre pseudo", 40, 2 * largeurFenetre() / 14, 6.5 * hauteurFenetre() / 12);
    couleurCourante(20, 20, 20);
    rectangle(2 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
}
void pageJeu1(Donnees *donnees)
{

    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
}

void CliqueJeu(Donnees *donnees)
{
    if (etatBoutonSouris() == GaucheAppuye)
    {
        if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 10 * largeurFenetre() / 14) && (6.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 8 * hauteurFenetre() / 12))
        {
            donnees->page = 1;
        }
        if (donnees->page == 1)
        {
            if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
            {
                donnees->page = 6;
            } // pagejeu1

            if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
            { //retour
                donnees->page = 1;
            }
            if ((2 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 12.5 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
            {
                donnees->z = 1;
            } //clic zone grise pour activer l'écriture du text
        }
    }
}