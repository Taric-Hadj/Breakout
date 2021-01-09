#include"fonction.h"
#include"menu.h"

int main(int argc, char **argv){
    initialiseGfx(argc, argv);
    prepareFenetreGraphique("PACMAN", LargeurFenetre, HauteurFenetre);
    return 0;
}