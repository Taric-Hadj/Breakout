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
void ecrire(char text[12])
{
    char a[12] = "";
    if ((caractereClavier() == 8) && (strcmp(text, "") != 0))
    {
        strncpy(a, text, strlen(text) - 1);
        strcat(a, "\0");
        strcpy(text, a);
    }
    else
    {
        for (int i = 0; i < 11; i++)
        {
            if (text[i] == '\0')
            {
                text[i] = caractereClavier();
                text[i + 1] = '\0';
                break;
            }
        }
    }
}

int min(int a, int b) { return (a < b) ? a : b; }             //minimum
double vabs(double val) { return val >= 0 ? val : val * -1; } //valeur absolu entre deux termes

int rand_a_b(int a, int b)
{
    b++;
    return rand() % (b - a) + a;
}

void GenMap()
{
    FILE *ptrfile = fopen("Fichier/genmap", "w+");
    char coef[32][29];
    // debut
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            coef[i][j] = 'v';
        }
    }
    // debut random
    int direc = 0;
    int y = 0;
    int x = 0;
    int i = 0;

    // au moins un horizontale et un verticale
    x = rand_a_b(3, 11);
    for (int i = 1; i < 15; i++)
    {
        coef[x][i] = '.';
        coef[x + 1][i] = '*';
    }
    y = rand_a_b(3, 11);
    for (int i = 1; i < 15; i++)
    {
        coef[i][y] = '*';
        coef[i][y + 1] = '.';
        coef[1][y] = '.';
    }
    while (i < 2)
    {
        direc = rand_a_b(1, 2);
        switch (direc)
        {
        case 1: // verti

            y = rand_a_b(3, 11);
            for (int i = 1; i < 15; i++)
            {
                coef[i][y] = '*';
                coef[i][y + 1] = '.';
                coef[1][y] = '.';
            }
            break;
        case 2: // hori
            x = rand_a_b(3, 11);
            for (int i = 1; i < 15; i++)
            {
                coef[x][i] = '.';
                coef[x + 1][i] = '*';
            }
            break;
        }

        i++;
    }
    // copie des 1/4

    for (int i = 1; i < 14; i++)
    {
        for (int j = 1; j < 14; j++)
        {
            coef[i][j + 14] = coef[i][j];
        }
    }
    for (int i = 1; i < 14; i++)
    {
        for (int j = 1; j < 14; j++)
        {
            coef[i + 14][j] = coef[i][j];
        }
    }
    for (int i = 1; i < 14; i++)
    {
        for (int j = 1; j < 14; j++)
        {
            coef[i + 14][j + 14] = coef[i][j];
        }
    }

    // bande horizontale tj presente
    for (int i = 0; i < 29; i++)
    {
        coef[14][i] = '.';
        coef[15][i] = '*';
    }
    coef[15][10] = '.';

    // bande verticale tj presente
    for (int i = 0; i < 32; i++)
    {
        coef[i][14] = '*';
        coef[i][15] = '.';
    }
    coef[17][14] = '.';
    coef[1][14] = '.';

    // definition boite a phantome qui ne change pas
    for (int i = 13; i < 17; i++)
    {
        for (int j = 11; j < 18; j++)
        {
            coef[i][j] = '0';
        }
    }
    for (int i = 14; i < 16; i++)
    {
        for (int j = 12; j < 17; j++)
        {
            coef[i][j] = '8';
        }
    }
    coef[16][14] = '8';

    // definition mur qui ne change pas
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            if ((i == 0 || j == 0 || i == 31 || j == 28) &&
                (i != 14 && i != 15))
            {
                coef[i][j] = '0';
            }
        }
    }

    // on finit par emplir tout les murs manquant
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            if (coef[i][j] == 'v')
            {
                coef[i][j] = '0';
            }
        }
    }

    // on copie dans le fichier
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            fprintf(ptrfile, "%c ", coef[i][j]);
        }
        fprintf(ptrfile, "\n");
    }
    fclose(ptrfile);
}

void FillMap(char coef[32][29], char *file)
{
    FILE *ptrfile = fopen(file, "r");
    char init;
    // printf("\n\n");
    // system("clear");
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            fscanf(ptrfile, "%c ", &init);
            coef[i][j] = init;
            // printf("%c ", coef[i][j]);
        }
        // printf("\n");
    }
    fclose(ptrfile);
}

void Map(char map[32][29], int x, int y)
{
    Color color;
    color.blue = 255; // rand_a_b(0, 255);
    color.red = 0;    // rand_a_b(0, 255);
    color.green = 0;  // rand_a_b(0, 255);

    int mini = min(largeurFenetre(), hauteurFenetre());
    int taille = mini / 32;
    int decx = (largeurFenetre() - 29 * taille) * x / 100;
    int decy = (hauteurFenetre() - 32 * taille) * y / 100;
    int cmp = 0, pos;
    int g = 0, b = 0, h = 0, d = 0;
    int list[4];
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            cmp = 0;
            g = 0;
            b = 0;
            h = 0;
            d = 0;
            switch (map[i][j])
            {
            case '0':
                if (i + 1 <= 32 && map[i + 1][j] == '0')
                {
                    g = 1;
                }
                if (i - 1 >= 0 && map[i - 1][j] == '0')
                {
                    d = 1;
                }
                if (j + 1 <= 29 && map[i][j + 1] == '0')
                {
                    b = 1;
                }
                if (j - 1 >= 0 && map[i][j - 1] == '0')
                {
                    h = 1;
                }
                // printf("%i\n",cmp);
                list[0] = g;
                list[1] = b;
                list[2] = d;
                list[3] = h;
                cmp = list[0] + list[1] + list[2] + list[3];
                switch (cmp)
                {
                case 1:
                    couleurCourante(color.red, color.green, color.blue);

                    if (g)
                    {
                        arrondiBout(j * taille + decx + taille / 2,
                                    i * taille + decy + taille / 2, taille, 3);
                    }
                    if (d)
                    {
                        arrondiBout(j * taille + decx + taille / 2,
                                    i * taille + decy + taille / 2, taille, 1);
                    }
                    if (h)
                    {
                        arrondiBout(j * taille + decx + taille / 2,
                                    i * taille + decy + taille / 2, taille, 2);
                    }
                    if (b)
                    {
                        arrondiBout(j * taille + decx + taille / 2,
                                    i * taille + decy + taille / 2, taille, 4);
                    }

                    break;
                case 3:
                    // printf("%i\n",cmp);
                    /*couleurCourante(255, 0, 255);
                                  rectangle(j*taille+decx,i*taille+decy,(j+1)*taille+decx,(i+1)*taille+decy);
                                  couleurCourante(0, 0, 0);
                                  rectangle(j*taille+decx+2,i*taille+decy,(j+1)*taille+decx-2,(i+1)*taille+decy);//+2-2
                       en x pour la verticale et +2-2 en y
                       pour l'horizontale*/
                    for (pos = 0; list[pos] == 2; pos++)
                        ;

                    if (list[(pos + 1) % 4] && list[(pos + 3) % 4])
                    {
                        couleurCourante(color.red, color.green, color.blue);
                        rectangle(j * taille + decx, i * taille + decy,
                                  (j + 1) * taille + decx,
                                  (i + 1) * taille + decy);
                        couleurCourante(0, 0, 0);
                        rectangle(j * taille + decx, i * taille + decy + 2,
                                  (j + 1) * taille + decx,
                                  (i + 1) * taille + decy - 2);
                    }
                    if (list[(pos + 2) % 4] && list[(pos + 4) % 4])
                    {
                        couleurCourante(color.red, color.green, color.blue);
                        rectangle(j * taille + decx, i * taille + decy,
                                  (j + 1) * taille + decx,
                                  (i + 1) * taille + decy);
                        couleurCourante(0, 0, 0);
                        rectangle(j * taille + decx + 2, i * taille + decy,
                                  (j + 1) * taille + decx - 2,
                                  (i + 1) * taille + decy);
                    }

                    break;
                case 2:
                    couleurCourante(color.red, color.green, color.blue);
                    if (map[i + 1][j] == '0' && map[i - 1][j] == '0')
                    {
                        couleurCourante(color.red, color.green, color.blue);
                        rectangle(j * taille + decx, i * taille + decy,
                                  (j + 1) * taille + decx,
                                  (i + 1) * taille + decy);
                        couleurCourante(0, 0, 0);
                        rectangle(j * taille + decx + 2, i * taille + decy,
                                  (j + 1) * taille + decx - 2,
                                  (i + 1) * taille + decy);
                        break;
                    }
                    if (map[i][j + 1] == '0' && map[i][j - 1] == '0')
                    {
                        couleurCourante(color.red, color.green, color.blue);
                        rectangle(j * taille + decx, i * taille + decy,
                                  (j + 1) * taille + decx,
                                  (i + 1) * taille + decy);
                        couleurCourante(0, 0, 0);
                        rectangle(j * taille + decx, i * taille + decy + 2,
                                  (j + 1) * taille + decx,
                                  (i + 1) * taille + decy - 2);
                        break;
                    }

                    for (pos = 0; list[pos] == 1; pos++)
                        ;
                    // printf("%i\n",pos);
                    if (list[(pos + 1) % 4])
                    {
                        switch ((pos + 1) % 4)
                        {
                        case 0:
                            // arrondiAngle(j*taille+decx+taille/2,i*taille+decy+taille/2,taille,
                            // 4);
                            break;
                        case 1:

                            arrondiAngle(j * taille + decx + taille / 2,
                                         i * taille + decy + taille / 2, taille,
                                         1);
                            break;
                        case 2:
                            // arrondiAngle(j*taille+decx+taille/2,i*taille+decy+taille/2,taille,
                            // 4);
                            break;
                        case 3:
                            // arrondiAngle(j*taille+decx+taille/2,i*taille+decy+taille/2,taille,
                            // 2);
                            break;
                        }
                    }
                    if (list[(pos + 3) % 4])
                    {
                        switch ((pos + 3) % 4)
                        {
                        case 0:
                            arrondiAngle(j * taille + decx + taille / 2,
                                         i * taille + decy + taille / 2, taille,
                                         2);
                            break;
                        case 1:
                            arrondiAngle(j * taille + decx + taille / 2,
                                         i * taille + decy + taille / 2, taille,
                                         4);
                            break;
                        case 2:
                            // arrondiAngle(j*taille+decx+taille/2,i*taille+decy+taille/2,taille,
                            // 3);
                            break;
                        case 3:
                            arrondiAngle(j * taille + decx + taille / 2,
                                         i * taille + decy + taille / 2, taille,
                                         3);
                            break;
                        }
                    }

                    break;
                case 0:
                    couleurCourante(255, 255, 255);

                    rectangle(j * taille + decx, i * taille + decy,
                              (j + 1) * taille + decx, (i + 1) * taille + decy);
                    break;
                }
                if (cmp >= 4 || cmp < 0)
                {
                    // printf("%i", cmp);
                    couleurCourante(255, 0, 0);
                    rectangle(j * taille + decx, i * taille + decy,
                              (j + 1) * taille + decx, (i + 1) * taille + decy);

                    for (pos = 0; list[pos] == 1; pos++)
                        ;
                    if (list[(pos + 1) % 4] && list[(pos + 3) % 4])
                    {
                        couleurCourante(0, 0, 0); // changer le test
                        // couleurCourante(0, 255, 255);
                        rectangle(j * taille + decx, i * taille + decy,
                                  (j + 1) * taille + decx,
                                  (i + 1) * taille + decy);
                        couleurCourante(0, 0, 0);
                        rectangle(j * taille + decx + 2, i * taille + decy,
                                  (j + 1) * taille + decx - 2,
                                  (i + 1) * taille + decy);
                    }
                }

                break;
            case '.':
                couleurCourante(150, 150, 150);
                // rectangle(j*taille+decx,i*taille+decy,(j+1)*taille+decx,(i+1)*taille+decy);
                break;
            case '*':
                couleurCourante(255, 255, 0);
                epaisseurDeTrait(mini / 100);
                point((j + 1) * taille + decx, i * taille + decy);
                // point((j)*taille+decx,i*taille+decy);
                break;
            case '#':
                switch ((j + 1) % 5)
                {

                case 1:
                    cerise((j + 1) * taille + decx, i * taille + decy,
                           mini * 2 / 80);
                    break;

                case 2:
                    fraise((j + 1) * taille + decx, i * taille + decy,
                           mini * 2 / 80);
                    break;
                case 3:
                    banane((j + 1) * taille + decx, i * taille + decy,
                           mini * 2 / 80);
                    break;
                case 4:
                    orange((j + 1) * taille + decx, i * taille + decy,
                           mini * 2 / 80);
                    break;
                }

                break;
            case '-':
                couleurCourante(color.red, color.green, color.blue);
                // rectangle(j*taille+decx,i*taille+decy,(j+1)*taille+decx,(i+1)*taille+decy);
                break;
            }
        }
    }
}
void cerise(float x, float y, float taille)
{
    // utiliser switch pour les bonus suivant le niveau
    couleurCourante(255, 0, 0);
    epaisseurDeTrait(taille / 2);
    point(x - 3 * (taille / 8), y - (taille / 8));
    point(x + (taille / 8), y - 3 * (taille / 8));

    couleurCourante(200, 163, 72);
    epaisseurDeTrait(taille / 18);
    ligne(x - (taille / 4), y, x + 3 * (taille / 8), y + 3 * taille / 8);
    ligne(x + (taille / 8), y - (taille / 4), x + 3 * (taille / 8),
          y + 3 * taille / 8);

    couleurCourante(8, 184, 0);
    rectangle(x + (taille / 4), y + (taille / 2), x + (taille / 2),
              y + 3 * (taille / 8));
    rectangle(x + (taille / 2), y + 3 * (taille / 8), x + 3 * (taille / 8),
              y + (taille / 4));
}
void orange(float x, float y, float taille)
{
    couleurCourante(238, 156, 12);
    epaisseurDeTrait(taille * 0.95);
    point(x, y);

    couleurCourante(233, 170, 60);
    rectangle(x - taille / 4, y, x - taille / 8, y + taille / 8);

    couleurCourante(10, 230, 20);
    rectangle(x - taille / 8, y + taille / 4, x + taille / 8,
              y + 3 * taille / 8);
    rectangle(x - taille / 8, y + 3 * taille / 8, x + taille / 4,
              y + taille / 2);
}
void banane(float x, float y, float taille)
{
    couleurCourante(244, 237, 10);
    epaisseurDeTrait(taille * 0.95);
    point(x - taille / 8, y - taille / 8);

    couleurCourante(0, 0, 0);
    epaisseurDeTrait(taille);
    point(x + taille / 8, y + taille / 8);

    couleurCourante(10, 230, 20);
    rectangle(x - taille / 4, y + taille / 8, x - 4 * taille / 8,
              y + 3 * taille / 8);
}
void grain(float x, float y, int coefx, int coefy, float taille, int divx,
           int divy, int fruit)
{

    int redExt, greenExt, blueExt, redInt, greenInt, blueInt, epaisInt;
    float epaisExt;

    if (fruit == 1)
    {
        // raisin
        redExt = 185;
        greenExt = 18;
        blueExt = 234;
        redInt = 195;
        greenInt = 70;
        blueInt = 233;
        epaisExt = 1.5;
        epaisInt = 2;
    }
    else if (fruit == 2)
    {
        // fraise
        redExt = 255;
        greenExt = 20;
        blueExt = 20;
        redInt = 0;
        greenInt = 0;
        blueInt = 0;
        epaisExt = 2;
        epaisInt = 19;
    }
    couleurCourante(redExt, greenExt, blueExt); // couleur exterieur
    epaisseurDeTrait(taille / epaisExt);
    point(x + coefx * (taille / divx), y + coefy * (taille / divy));
    couleurCourante(redInt, greenInt, blueInt); // couleur intérieur
    epaisseurDeTrait(taille / epaisInt);
    point(x + coefx * (taille / divx), y + coefy * (taille / divy));
}

void fraise(float x, float y, float taille)
{

    grain(x, y, -1, -3, taille, 8, 8, 2);  // 3
    grain(x, y, -1, -1, taille, 4, 8, 2);  // 2
    grain(x, y, -3, 1, taille, 8, 8, 2);   // 1
    grain(x, y, -2, 1, taille, 16, 16, 2); // 6

    grain(x, y, 1, -1, taille, 16, 8, 2); // 4
    grain(x, y, 1, 0, taille, 4, 1, 2);   // 5

    couleurCourante(20, 230, 20);
    triangle(x, y + taille / 4, x + taille / 4, y + taille / 4,
             x + 3 * (taille / 8), y + 3 * (taille / 8));
    triangle(x, y + taille / 4, x + taille / 4, y + taille / 4,
             x - 2 * (taille / 8), y + 2 * (taille / 4));
}
void arrondiBout(int x, int y, int taille, int orientation)
{
    epaisseurDeTrait(taille + 1);
    point(x, y);
    switch (orientation)
    {
    case 1: // haut
        rectangle(x - (taille / 2), y, x + (taille / 2), y - (taille / 2));
        couleurCourante(0, 0, 0);
        rectangle(x - (taille / 2) + 2, y, x + (taille / 2) - 2,
                  y - (taille / 2));
        break;
    case 2: // droit
        couleurCourante(0, 0, 255);
        rectangle(x, y + (taille / 2), x - (taille / 2), y - (taille / 2));
        couleurCourante(0, 0, 0);
        rectangle(x, y + (taille / 2) - 2, x - (taille / 2),
                  y - (taille / 2) + 2);
        break;

    case 3: // bas
        rectangle(x - (taille / 2), y, x + (taille / 2), y + (taille / 2));
        couleurCourante(0, 0, 0);
        rectangle(x - (taille / 2) + 2, y, x + (taille / 2) - 2,
                  y + (taille / 2));
        break;

    case 4: // gauche
        rectangle(x, y - (taille / 2), x + (taille / 2), y + (taille / 2));
        couleurCourante(0, 0, 0);
        rectangle(x, y - (taille / 2) + 2, x + (taille / 2),
                  y + (taille / 2) - 2);
        break;
    }
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(taille - 3);
    point(x, y);
}

void arrondiAngle(int x, int y, int taille, int orientation)
{
    epaisseurDeTrait(taille + 1);
    point(x, y);
    switch (orientation)
    {
    case 1:
        // bas/gauche
        rectangle(x, y - (taille / 2), x + (taille / 2),
                  y + (taille / 2));                         // horizontale
        rectangle(x, y - (taille / 2), x - (taille / 2), y); // verticlae
        couleurCourante(0, 0, 0);
        rectangle(x, y - (taille / 2) + 2, x + (taille / 2),
                  y + (taille / 2) - 2);
        rectangle(x - (taille / 2) + 2, y, x + (taille / 2) - 2,
                  y - (taille / 2) - 2); // bas

        break;

    case 2:
        // haut/gauche
        rectangle(x, y + (taille / 2), x - (taille / 2), y - (taille / 2));
        rectangle(x, y + (taille / 2), x + (taille / 2), y);
        couleurCourante(0, 0, 0);
        rectangle(x - (taille / 2) + 2, y, x + (taille / 2) - 2,
                  y + (taille / 2));
        rectangle(x, y + (taille / 2) - 2, x - (taille / 2) - 2,
                  y - (taille / 2) + 2);

        break;

    case 3:
        // bas/droite
        rectangle(x, y - (taille / 2), x + (taille / 2), y);
        rectangle(x, y - (taille / 2), x - (taille / 2), y + (taille / 2));
        couleurCourante(0, 0, 0);
        rectangle(x - (taille / 2) + 2, y, x + (taille / 2) - 2,
                  y - (taille / 2));
        rectangle(x, y + (taille / 2) - 2, x - (taille / 2) - 2,
                  y - (taille / 2) + 2);
        break;

    case 4:
        // droite/haut
        rectangle(x, y + (taille / 2), x + (taille / 2), y - (taille / 2));
        rectangle(x, y + (taille / 2), x - (taille / 2), y);
        couleurCourante(0, 0, 0);
        rectangle(x - (taille / 2) + 2, y, x + (taille / 2) - 2,
                  y + (taille / 2)); // haut
        rectangle(x, y - (taille / 2) + 2, x + (taille / 2),
                  y + (taille / 2) - 2);

        break;
    }
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(taille - 3);
    point(x, y);
}
