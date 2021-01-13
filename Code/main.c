#include"fonction.h"

int main(int argc, char **argv){
    initialiseGfx(argc, argv);
    prepareFenetreGraphique("PACMAN", LargeurFenetre, HauteurFenetre);
    lanceBoucleEvenements();
    return 0;
}
void gestionEvenement(EvenementGfx evenement)
{
    switch (evenement)
    {
    case Initialisation:
        demandeTemporisation(20);
        break;

    case Temporisation:
        rafraichisFenetre();
        break;

    case Affichage:
        effaceFenetre(0, 0, 0);
        couleurCourante(20, 20, 20);
        rectangle(3 * largeurFenetre() / 9, 5 * hauteurFenetre() / 9, 6 * largeurFenetre() / 9, 6 * hauteurFenetre() / 9);
        couleurCourante(255, 255, 255);
        afficheChaine("PacMan", 40, 7 * largeurFenetre() / 20 + 15, 21 * hauteurFenetre() / 36);
        couleurCourante(20, 20, 20);
        rectangle(largeurFenetre() / 10, 2 * hauteurFenetre() / 10 + 40, 3 * largeurFenetre() / 9, 2 * hauteurFenetre() / 6 + 5);
        couleurCourante(255, 255, 255);
        afficheChaine("Option", 40, largeurFenetre() / 10 + 18, 2 * hauteurFenetre() / 8 + 23);
        couleurCourante(20, 20, 20);
        rectangle(7 * largeurFenetre() / 8 + 5, 2 * hauteurFenetre() / 10 + 40, 4 * largeurFenetre() / 7 + 20, 2 * hauteurFenetre() / 6 + 5);
        couleurCourante(255, 255, 255);
        afficheChaine("Jouer", 40, 5 * largeurFenetre() / 8 + 12, 2 * hauteurFenetre() / 8 + 23);

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
      /*  switch (page())
        {
        case 0:
            break;

        case 1:
            break;

        }
        break;
*/
    case Souris:
        case Inactivite:
            break;

        case Redimensionnement:
            printf("Largeur : %d\t", largeurFenetre());
            printf("Hauteur : %d\n", hauteurFenetre());
            break;
        }
    }
