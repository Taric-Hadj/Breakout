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
    char text[12]="";
    static int z=0;
    int *zone = &z;
    static int page = 0;
    int *choixpage = &page;
    
    switch (evenement)
    {
    case Initialisation:
        demandeTemporisation(20);
       
        break;

    case Temporisation:
        rafraichisFenetre();
        break;

    case Affichage:
    AffichePage(choixpage, zone, text);
    
        break;

    case Clavier:

    if(*choixpage == 1){
        

    if(*zone==1){
        ecrire(text);
        printf("test");
			}

    }

        break;

    case ClavierSpecial:

		printf("ASCII %d\n", toucheClavier());

        break;

    case BoutonSouris:
    Clique(choixpage, zone);
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
