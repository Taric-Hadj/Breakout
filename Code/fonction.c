#include "fonction.h"




// void pageOption(Donnees *donnees)
// {
//     effaceFenetre(0, 0, 0);
//     //Credits
//     couleurCourante(20, 20, 20);
//     rectangle(4.5 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
//     couleurCourante(255, 255, 0);
//     epaisseurDeTrait(3);
//     afficheChaine("Credits", 40, 5.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12);
//     couleurCourante(20, 20, 20);
//     rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
//     couleurCourante(255, 255, 0);
//     afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
// }

void pageScore(Donnees *donnees)
{
    //salu taric 
    effaceFenetre(0, 0, 0);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
}

// void Credits(Donnees *donnees)
// {
//     static DonneesImageRGB *image = NULL;
//     image = lisBMPRGB("./images/isen2.bmp");
//     if (image != NULL)
//     {
//         ecrisImage((10 * largeurFenetre() / 14 - image->largeurImage), hauteurFenetre() / 2 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
//     }
//     couleurCourante(255, 255, 0);
//     afficheChaine("Taric", 40, 5.5 * largeurFenetre() / 14, 14 * hauteurFenetre() / 15);
//     afficheChaine("Yannis", 40, 5.5 * largeurFenetre() / 14, 12.5 * hauteurFenetre() / 15);
//     afficheChaine("Thibault", 40, 5.5 * largeurFenetre() / 14, 11 * hauteurFenetre() / 15);
//     afficheChaine("Louise", 40, 5.5 * largeurFenetre() / 14, 9.5 * hauteurFenetre() / 15);
//     afficheChaine("Fanny", 40, 5.5 * largeurFenetre() / 14, 8 * hauteurFenetre() / 15);
//     couleurCourante(20, 20, 20);
//     rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
//     couleurCourante(255, 255, 0);
//     afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
// }

// void AffichePage(int *choixpage, int *zone, char text[])
// {
//     // static DonneesImageRGB *image = NULL;

//     if (*choixpage == 0)
//     {
//         accueil();
//     }
//     if (*choixpage == 1)
//     { 
//         pageJeu();
//         afficheChaine(text, 150, 350, 200);
//     }
//     if (*choixpage == 2)
//     {
//         pageOption();
//     }
//     if (*choixpage == 3)
//     {
//         pageScore();
//     }
//     if (*choixpage == 4)
//     {
//         Credits();
//     }
//     if (*choixpage == 5)
//     {

//         pageJeu1();
//     }
// }

// void Clique(int *choixpage, int *zone)
// {
//     if (etatBoutonSouris() == GaucheAppuye)
//     {

//         //jouer
//         if (*choixpage == 0)
//         {
//             if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 10 * largeurFenetre() / 14) && (6.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 8 * hauteurFenetre() / 12))
//             {
//                 *choixpage = 1;
//             }

//             //score
//             if ((8 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 12.5 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
//             {
//                 *choixpage = 3;
//             }
//             //quitter

//             if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
//             {
//                 termineBoucleEvenements();
//             }
//             //options
//             if ((1.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 6 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
//             {
//                 *choixpage = 2;
//             }
//         }
//         //options
//         if (*choixpage == 2)
//         {
//             if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (2.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 4 * hauteurFenetre() / 12))
//             { //credits
//                 *choixpage = 4;
//             }
//             if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
//             { //retour
//                 *choixpage = 0;
//             }
//         }
//         if (*choixpage == 4) //retour credits vers options
//         {
//             if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
//             { //retour
//                 *choixpage = 2;
//             }
//         }

//         if (*choixpage == 3)
//         {
//             if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
//             { //retour
//                 *choixpage = 0;
//             }
//         }
//         if (*choixpage == 1)
//         {
//             if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
//             {
//                 *choixpage = 5;
//             } // pagejeu1

//             if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
//             { //retour
//                 *choixpage = 0;
//             }
//             if ((2 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 12.5 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
//             {
//                 *zone = 1;
//             } //clic zone grise pour activer l'écriture du text
//         }
//         if (*choixpage == 5)
//         {

//             if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
//             { //retour
//                 *choixpage = 0;
//             }
//         }
//     }
// }


