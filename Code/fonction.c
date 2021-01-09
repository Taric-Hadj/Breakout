#include "fonction.h"

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
        effaceFenetre(255, 255, 255);
        break;

    case Clavier:
        switch (caractereClavier())
        {
        case 'q':
        case 'Q':
            break;
        }
        break;
    case ClavierSpecial:
        break;

    case BoutonSouris:
        break;

    case Souris:
        break;

    case Inactivite:
        break;

    case Redimensionnement:
        printf("Largeur : %d\t", largeurFenetre());
        printf("Hauteur : %d\n", hauteurFenetre());
        break;
    }
}
