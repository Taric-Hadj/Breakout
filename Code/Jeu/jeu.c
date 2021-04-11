#include "jeu.h"
#include "../Jeu1/Jeu1.h"

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

        if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
        {
            
            donnees->page = 3;
            Map(donnees->tab,"map.txt");

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


// void Map()
// {
//     char tab[45][25];
//     char a;
//     FILE *map = fopen("map.txt", "r");
//     if(map!=NULL){
//             fscanf(map,"%c",&a);
//             printf("%c",a);
//     fclose(map);
//     }
//     else{ 
//     printf("BIG TEST \n");
//     }
    // for (int i = 0; i < 25; i++)
    // {
    //     for (int j = 0; j < 45; j++)
    //     {
    //         // tab[i][j] = fgetc(map);
            // printf("%c",fgetc(map));
    //     }
    //     // fseek(map, SEEK_CUR, 1);
    // }
    // for (int i = 0; i < 25; i++)
    // {
    // printf("test\n");
    //     for (int j = 0; j < 45; j++)
    //     {
    //         printf("%c", tab[i][j]);
    //     }
    //     printf("\n");
    // }
    void Map(char coef[45][25], char *map) {
    FILE *ptrfile = fopen(map, "r");
    char init;
    for (int i = 0; i < 45; i++) {
        for (int j = 0; j < 25; j++) {
            fscanf(ptrfile, "%c ", &init);
            coef[i][j] = init;
        }
    }
    fclose(ptrfile);
}

