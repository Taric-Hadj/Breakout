#include "fonction.h"

void accueil()
{
    effaceFenetre(0, 0, 0);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(6);
    afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10 * hauteurFenetre() / 12);
    //
    couleurCourante(20, 20, 20);
    rectangle(4.5 * largeurFenetre() / 14, 8 * hauteurFenetre() / 12, 10 * largeurFenetre() / 14, 6.5 * hauteurFenetre() / 12);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 0);
    afficheChaine("Jouer", 60, 5.5 * largeurFenetre() / 14, 7 * hauteurFenetre() / 12);
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
}

void pageScore()
{
    effaceFenetre(0, 0, 0);
}

void Credits()
{
    couleurCourante(255, 255, 0);
    afficheChaine("Jouer", 60, 5.5 * largeurFenetre() / 14, 7 * hauteurFenetre() / 12);
}