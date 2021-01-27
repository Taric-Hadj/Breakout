#include "fonction.h"

void accueil()
{
    effaceFenetre(0, 0, 0);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(6);
    afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10.5* hauteurFenetre() / 12);
    //
    couleurCourante(20, 20, 20);
    rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 10 * largeurFenetre() / 14, 6 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 0);
    afficheChaine("Jouer", 60, 5.5 * largeurFenetre() / 14, 6.5* hauteurFenetre() / 12);
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

void pageJeu()
{
    effaceFenetre(0, 0, 0);
}

void pageOption()
{
    effaceFenetre(0, 0, 0);
    //Credits
    couleurCourante(20, 20, 20);
    rectangle(4.5 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(3);
    afficheChaine("Credits", 40, 5.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
}

void pageScore()
{
    effaceFenetre(0, 0, 0);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
}

void Credits()
{
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

int AffichePage(int choixpage)
{
    // static DonneesImageRGB *image = NULL;

    if (choixpage == 0)
    {
            static DonneesImageRGB *image = NULL;
        accueil();
         image = lisBMPRGB("./images/pacman5.bmp");
        if (image != NULL)
         {
             ecrisImage((9*largeurFenetre()/14 - image->largeurImage), 10*hauteurFenetre()/12 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
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
        static DonneesImageRGB *image = NULL;
        Credits();
        image = lisBMPRGB("./images/isen2.bmp");
        if (image != NULL)
         {
             ecrisImage((10*largeurFenetre()/14 - image->largeurImage), hauteurFenetre()/2 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
        }
    }
    return choixpage;
}

int Clique(int choixpage)
{
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
            { //credits
                choixpage = 4;
            }
            if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
            { //retour
                choixpage = 0;
            }
        }
        if (choixpage == 4)//retour credits vers options
            {
                if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
                { //retour
                    choixpage = 2;
                }
            }
        //
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
        if (choixpage == 3)
        {
            if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
            { //retour
                choixpage = 0;
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
    return choixpage;
}