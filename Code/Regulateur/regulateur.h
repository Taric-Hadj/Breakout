#include "../Menu/menu.h"
#include "../Jeu/jeu.h"
#include "../option/option.h"
#include "../Credits/Credits.h"
#include "../Jeu1/Jeu1.h"


typedef struct
{
    void (*t1)(Donnees *);
    void (*t2)(Donnees *);
    void (*t3)(Donnees *);
    void (*t4)(Donnees *);
    void (*t5)(Donnees *);
    void (*t6)(Donnees *);
    void (*t7)(Donnees *);
} Choix;

void choix(Donnees *donnees, Choix type);
void F_NULL();
Choix tAffichage();
Choix tClique();
Choix tClavier();
Choix tTempo();
