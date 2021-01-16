#include "fonction.h"


void accueil(){
     effaceFenetre(0, 0, 0);
        couleurCourante(255, 255, 0);
        epaisseurDeTrait(6);
        afficheChaine("PacMan", 80, 5* largeurFenetre() / 20 + 15, 32* hauteurFenetre() / 36);
        //test
        couleurCourante(20, 20, 20);
        rectangle(3 * largeurFenetre() / 9, 5 * hauteurFenetre() / 9, 6 * largeurFenetre() / 9, 6 * hauteurFenetre() / 9);
        epaisseurDeTrait(4);
        couleurCourante(255, 255, 0);
        afficheChaine("Jouer", 60, 7* largeurFenetre() / 20 + 15, 21* hauteurFenetre() / 36);
        //
        couleurCourante(20, 20, 20);
        rectangle(largeurFenetre() / 10, 2 * hauteurFenetre() / 10 + 40, 3* largeurFenetre() /8, 2 * hauteurFenetre() / 6 + 5);
        couleurCourante(255, 255,0);
        epaisseurDeTrait(3);
        afficheChaine("Options", 40, largeurFenetre() / 10 + 10, 2 * hauteurFenetre() / 8 + 23);
        //
        couleurCourante(20, 20, 20);
        rectangle(7 * largeurFenetre() / 8 + 5, 2 * hauteurFenetre() / 10 + 40, 4 * largeurFenetre() / 7 + 20, 2 * hauteurFenetre() / 6 + 5);
        couleurCourante(255, 255, 0);
        epaisseurDeTrait(3);
        afficheChaine("Score", 40, 5 * largeurFenetre() / 8 + 12, 2 * hauteurFenetre() / 8 + 23);
}

void pageJeu(){
    
}