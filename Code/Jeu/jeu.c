#include "jeu.h"
//#include "../Jeu1/Jeu1.h"

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
    epaisseurDeTrait(2);
    couleurCourante(255, 255, 255);
    afficheChaine(donnees->text, 40, 3 * largeurFenetre() / 14, 9 * hauteurFenetre() / 24);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
}

void fantome(float x, float y, float r)
{
    cercle(x, y, r);
    rectangle(x - r, y - r, x + r, y);
    couleurCourante(0, 0, 0);
    triangle(x, y - r / 2, x - r / 3, y - r, x + r / 3, y - r);
    triangle(x - 2 * r / 3, y - r / 2, x - r, y - r, x - r / 3, y - r);
    triangle(x + 2 * r / 3, y - r / 2, x + r / 3, y - r, x + r, y - r);
    couleurCourante(255, 255, 255);
    cercle(x - r / 3, y + r / 3, r / 4);
    cercle(x + 2 * r / 3, y + r / 3, r / 4);
    couleurCourante(0, 0, 255);
    cercle(x - 5 * r / 24, y + r / 3, r / 8);
    cercle(x + 19 * r / 24, y + r / 3, r / 8);
}

void pageJeu1(Donnees *donnees)
{
    affichageMap(donnees->tab, largeurFenetre() / 8, 6 * hauteurFenetre() / 7);
    epaisseurDeTrait(2);
    couleurCourante(255, 255, 0);
    if (donnees->pacman.bonus)
        couleurCourante(255, 180, 0);
    cercle(largeurFenetre() / 8 + donnees->pacman.x, 6 * hauteurFenetre() / 7 - donnees->pacman.y, 8);
    //monstre 1 bleu
    couleurCourante(0, 150, 200);
    if (donnees->monstre[0].malus)
        couleurCourante(0, 0, 255);
    fantome(largeurFenetre() / 8 + donnees->monstre[0].x, 6 * hauteurFenetre() / 7 - donnees->monstre[0].y, 8);

    //monstre 2 rose
    couleurCourante(238, 130, 238);
    if (donnees->monstre[1].malus)
        couleurCourante(0, 0, 255);
    fantome(largeurFenetre() / 8 + donnees->monstre[1].x, 6 * hauteurFenetre() / 7 - donnees->monstre[1].y, 8);

    //monstre 3 orange
    couleurCourante(255, 165, 0);
    if (donnees->monstre[2].malus)
        couleurCourante(0, 0, 255);
    fantome(largeurFenetre() / 8 + donnees->monstre[2].x, 6 * hauteurFenetre() / 7 - donnees->monstre[2].y, 8);

    //monstre 4 rouge
    couleurCourante(255, 0, 0);
    if (donnees->monstre[3].malus)
        couleurCourante(0, 0, 255);
    fantome(largeurFenetre() / 8 + donnees->monstre[3].x, 6 * hauteurFenetre() / 7 - donnees->monstre[3].y, 8);

    //Score
    couleurCourante(255, 255, 0);
    char score[20] = "";
    sprintf(score, "Score: %d", donnees->score);
    afficheChaine(score, 35, 0.5 * largeurFenetre() / 14, 11 * hauteurFenetre() / 12);

    //Vies
    couleurCourante(255, 255, 0);
    char vies[20] = "";
    sprintf(vies, "Vies: %d", donnees->vies);
    afficheChaine(vies, 35, 10 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);

    //bouton retour
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);

    static int i = 0;
    i++;
    if (i < 15)
    {
        if (donnees->pacman.orientation == 4)
        {
            couleurCourante(0, 0, 0);
            triangle(largeurFenetre() / 8 + donnees->pacman.x, 6 * hauteurFenetre() / 7 - donnees->pacman.y, largeurFenetre() / 8 + donnees->pacman.x + 9, 6 * hauteurFenetre() / 7 - donnees->pacman.y + 9 * tanf(M_PI / 6), largeurFenetre() / 8 + donnees->pacman.x + 9, 6 * hauteurFenetre() / 7 - donnees->pacman.y - 9 * tanf(M_PI / 6));
        }
        else if (donnees->pacman.orientation == 2)
        {
            couleurCourante(0, 0, 0);
            triangle(largeurFenetre() / 8 + donnees->pacman.x, 6 * hauteurFenetre() / 7 - donnees->pacman.y, largeurFenetre() / 8 + donnees->pacman.x - 9, 6 * hauteurFenetre() / 7 - donnees->pacman.y + 9 * tanf(M_PI / 6), largeurFenetre() / 8 + donnees->pacman.x - 9, 6 * hauteurFenetre() / 7 - donnees->pacman.y - 9 * tanf(M_PI / 6));
        }
        else if (donnees->pacman.orientation == 1)
        {
            couleurCourante(0, 0, 0);
            triangle(largeurFenetre() / 8 + donnees->pacman.x, 6 * hauteurFenetre() / 7 - donnees->pacman.y, largeurFenetre() / 8 + donnees->pacman.x - 9 * tanf(M_PI / 6), 6 * hauteurFenetre() / 7 - donnees->pacman.y + 9, largeurFenetre() / 8 + donnees->pacman.x + 9 * tanf(M_PI / 6), 6 * hauteurFenetre() / 7 - donnees->pacman.y + 9);
        }
        else if (donnees->pacman.orientation == 3)
        {
            couleurCourante(0, 0, 0);
            triangle(largeurFenetre() / 8 + donnees->pacman.x, 6 * hauteurFenetre() / 7 - donnees->pacman.y, largeurFenetre() / 8 + donnees->pacman.x - 9 * tanf(M_PI / 6), 6 * hauteurFenetre() / 7 - donnees->pacman.y - 9, largeurFenetre() / 8 + donnees->pacman.x + 9 * tanf(M_PI / 6), 6 * hauteurFenetre() / 7 - donnees->pacman.y - 9);
        }
    }
    else if (i == 30)
        i = 0;
}

void CliqueJeu(Donnees *donnees)
{
    if (etatBoutonSouris() == GaucheAppuye)
    {

        if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
        {

            donnees->page = 3;
            Map(donnees->tab);

        } // pagejeu1

        if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
        { //retour
            donnees->page = 1;
        }
    }
}

void CliqueJeu1(Donnees *donnees)
{
    if (etatBoutonSouris() == GaucheAppuye)
    {

        if ((2 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 12.5 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
        {
            donnees->z = (donnees->z) ? false : true;
            printf("%d", donnees->z);
        } //clic zone grise pour activer l'écriture du text
    }
}

void ClavierJeu(Donnees *donnees)
{
    touches(&donnees->pacman);
}

void Map(char tab[25][23])
{
    FILE *map = fopen("./Fichier/map.txt", "r");
    if (map != NULL)
    {
        for (int i = 0; i < 25; i++)
        {
            for (int j = 0; j < 23; j++)
            {
                tab[i][j] = fgetc(map);
            }
            fgetc(map);
            fgetc(map);
        }
        fclose(map);
    }
}
void avancePacman(char tab[25][23], Pacman *pacman)
{
    switch (pacman->caractere)
    {
    case 'z':
    case 'Z':
        if (tab[(int)floor((pacman->y - 1) / 20)][(int)floor((pacman->x) / 20)] != '0' && tab[(int)floor((pacman->y - 1) / 20)][(int)floor((pacman->x + 15) / 20)] != '0')
        {
            pacman->y--;
            pacman->orientation = 1;
        }
        break;
    case 'q':
    case 'Q':
        if (tab[(int)floor((pacman->y) / 20)][(int)floor((pacman->x - 1) / 20)] != '0' && tab[(int)floor((pacman->y + 15) / 20)][(int)floor((pacman->x - 1) / 20)] != '0' && pacman->x != 0)
        {
            pacman->x--;
            pacman->orientation = 2;
        }
        else if (pacman->x == 0)
        {
            pacman->x = 440;
            pacman->orientation = 2;
        }
        break;
    case 's':
    case 'S':
        if (tab[(int)floor((pacman->y) / 20) + 1][(int)floor((pacman->x) / 20)] != '0' && tab[(int)floor((pacman->y) / 20) + 1][(int)floor((pacman->x + 15) / 20)] != '0')
        {
            pacman->y++;
            pacman->orientation = 3;
        }
        break;
    case 'd':
    case 'D':
        if (tab[(int)floor((pacman->y) / 20)][(int)floor((pacman->x) / 20) + 1] != '0' && tab[(int)floor((pacman->y + 15) / 20)][(int)floor((pacman->x) / 20) + 1] != '0' && pacman->x != 440)
        {
            pacman->x++;
            pacman->orientation = 4;
        }
        else if (pacman->x == 440)
        {
            pacman->x = 0;
            pacman->orientation = 4;
        }
        break;
    }
}

void avanceFantomes(char tab[25][23], Monstre *fantome)
{
    if (fantome->orientation == 0)
    {
        if (tab[(int)floor((fantome->y - 1) / 20)][(int)floor((fantome->x) / 20)] != '0' && tab[(int)floor((fantome->y - 1) / 20)][(int)floor((fantome->x + 15) / 20)] != '0')
        {
            fantome->y -= fantome->v;
            int i = rand() % 100;
            if (i < 3)
            {
                fantome->orientation = 1;
            }
            else if (3 < i && i < 6)
            {
                fantome->orientation = 3;
            }
        }
        else
        {
            int i = rand() % 60;
            if (i <= 25)
            {
                fantome->orientation = 1;
            }
            else if (25 < i && i <= 50)
            {
                fantome->orientation = 3;
            }
            else
            {
                fantome->orientation = 2;
            }
        }
    }
    else if (fantome->orientation == 1)
    {
        if (tab[(int)floor((fantome->y) / 20)][(int)floor((fantome->x - 1) / 20)] != '0' && tab[(int)floor((fantome->y + 15) / 20)][(int)floor((fantome->x - 1) / 20)] != '0' && fantome->x != 0)
        {
            fantome->x -= fantome->v;
            int i = rand() % 100;
            if (i < 3)
            {
                fantome->orientation = 0;
            }
            else if (3 < i && i < 6)
            {
                fantome->orientation = 2;
            }
        }
        else if (fantome->x == 0)
        {
            fantome->x = 440;
        }
        else
        {
            int i = rand() % 60;
            if (i <= 25)
            {
                fantome->orientation = 0;
            }
            else if (25 < i && i <= 50)
            {
                fantome->orientation = 2;
            }
            else
            {
                fantome->orientation = 3;
            }
        }
    }
    else if (fantome->orientation == 2)
    {
        if (tab[(int)floor((fantome->y) / 20) + 1][(int)floor((fantome->x) / 20)] != '0' && tab[(int)floor((fantome->y) / 20) + 1][(int)floor((fantome->x + 15) / 20)] != '0')
        {
            fantome->y += fantome->v;
            int i = rand() % 100;
            if (i < 3)
            {
                fantome->orientation = 1;
            }
            else if (3 < i && i < 6)
            {
                fantome->orientation = 3;
            }
        }
        else
        {
            int i = rand() % 60;
            if (i <= 25)
            {
                fantome->orientation = 1;
            }
            else if (25 < i && i <= 50)
            {
                fantome->orientation = 3;
            }
            else
            {
                fantome->orientation = 0;
            }
        }
    }
    else if (fantome->orientation == 3)
    {
        if (tab[(int)floor((fantome->y) / 20)][(int)floor((fantome->x) / 20) + 1] != '0' && tab[(int)floor((fantome->y + 15) / 20)][(int)floor((fantome->x) / 20) + 1] != '0' && fantome->x != 440)
        {
            fantome->x += fantome->v;
            int i = rand() % 100;
            if (i < 3)
            {
                fantome->orientation = 0;
            }
            else if (3 < i && i < 6)
            {
                fantome->orientation = 2;
            }
        }
        else if (fantome->x == 440)
        {
            fantome->x = 0;
        }
        else
        {
            int i = rand() % 60;
            if (i <= 25)
            {
                fantome->orientation = 0;
            }
            else if (25 < i && i <= 50)
            {
                fantome->orientation = 2;
            }
            else
            {
                fantome->orientation = 1;
            }
        }
    }
}

void touches(Pacman *pacman)
{
    if (caractereClavier() == 'z' || caractereClavier() == 'Z' || caractereClavier() == 'q' || caractereClavier() == 'Q' || caractereClavier() == 's' || caractereClavier() == 'S' || caractereClavier() == 'd' || caractereClavier() == 'D')
    {
        pacman->caractere = caractereClavier();
    }
}

void affichageMap(char tab[25][23], int x, int y)
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 23; j++)
        {
            if (tab[i][j] == '0')
            {
                couleurCourante(0, 0, 255);
                rectangle(x + 20 * j - 10, y - 20 * i - 10, x + 20 * j + 10, y - 20 * i + 10);
            }
            if (tab[i][j] == '.')
            {
                epaisseurDeTrait(4);
                couleurCourante(255, 255, 0);
                point(x + 20 * j, y - 20 * i);
            }
            if (tab[i][j] == '@')
            {
                couleurCourante(238, 18, 98);
                cercle(x + 20 * j, y - 20 * i, 6);
            }
        }
    }
}

void MangeGrain(char tab[25][23], Pacman *pacman, Monstre *monstre, int *score)
{
    // for (int i = 0; i < 25; i++)
    // {
    //     for (int j = 0; j < 23; j++)
    //     {
    //         if(pacman.x == j && pacman.y == i){
    //             if(tab[i][j]=='.'){
    //               tab[i][j]=' ';
    //             }
    //         }
    //     }
    // }
    if (tab[(int)floor((pacman->y + 10) / 20)][(int)floor((pacman->x + 10) / 20)] == '.')
    {
        tab[(int)floor((pacman->y + 10) / 20)][(int)floor((pacman->x + 10) / 20)] = ' ';
        *score += 10;
    }
    if (tab[(int)floor((pacman->y + 10) / 20)][(int)floor((pacman->x + 10) / 20)] == '@')
    {
        tab[(int)floor((pacman->y + 10) / 20)][(int)floor((pacman->x + 10) / 20)] = ' ';
        pacman->bonus = 1;
        for (int k = 0; k < 4; k++)
            monstre[k].malus = 1;
        *score += 50;
    }
}

void TempoJeu(Donnees *donnees)
{
    static int i = 0;
    static int j = 0;
    if (i > 50)
        avancePacman(donnees->tab, &donnees->pacman);
    else
        i++;
    MangeGrain(donnees->tab, &donnees->pacman, donnees->monstre, &donnees->score);
    if (donnees->tab[2][1] != '@')
        donnees->superpacgomme[0]++;
    if (donnees->tab[2][21] != '@')
        donnees->superpacgomme[1]++;
    if (donnees->tab[18][1] != '@')
        donnees->superpacgomme[2]++;
    if (donnees->tab[18][21] != '@')
        donnees->superpacgomme[3]++;
    for (int k = 0; k < 4; k++)
    {
        if (donnees->superpacgomme[0] == 2000)
            donnees->tab[2][1] = '@';
        if (donnees->superpacgomme[1] == 2000)
            donnees->tab[2][21] = '@';
        if (donnees->superpacgomme[2] == 2000)
            donnees->tab[18][1] = '@';
        if (donnees->superpacgomme[3] == 2000)
            donnees->tab[18][21] = '@';
    }

    for (int k = 0; k < 4; k++)
    {
        if (donnees->monstre[k].malus)
        {
            donnees->monstre[k].v = 0.5;
            if (fabsf(donnees->pacman.x - donnees->monstre[k].x) < 16 && fabsf(donnees->pacman.y - donnees->monstre[k].y) < 16)
            {
                donnees->monstre[k].x = 220;
                donnees->monstre[k].y = 200;
                if (k == 1 || k == 2)
                    donnees->monstre[k].tmp = 40;
                else
                    donnees->monstre[k].tmp = 60;
                donnees->monstre[k].malus = 0;
                donnees->monstre[k].orientation = 0;
                donnees->nb_fmange++;
                donnees->score += pow(2, donnees->nb_fmange) * 100;
            }
        }
        else
        {
            donnees->monstre[k].v = 1;
            if (fabsf(donnees->pacman.x - donnees->monstre[k].x) < 16 && fabsf(donnees->pacman.y - donnees->monstre[k].y) < 16)
            {
                donnees->pacman.x = 220;
                donnees->pacman.y = 360;
                donnees->vies--;
            }
        }
    }
    if (donnees->pacman.bonus)
    {
        j++;
        if (j == 250)
        {
            donnees->pacman.bonus = 0;
            j = 0;
            for (int k = 0; k < 4; k++)
            {
                donnees->monstre[k].malus = 0;
                donnees->monstre[k].v = 1;
            }
        }
    }

    for (int j = 0; j < 4; j++)
        if (donnees->monstre[j].tmp < 360)
        {
            if (j == 0)
            {
                if (donnees->monstre[j].tmp < 40)
                    donnees->monstre[j].x++;
                else if (donnees->monstre[j].tmp < 80)
                    donnees->monstre[j].y--;
                else if (donnees->monstre[j].tmp < 100)
                    donnees->monstre[j].x--;
                else if (donnees->monstre[j].tmp < 140)
                    donnees->monstre[j].y--;
                else if (donnees->monstre[j].tmp < 200)
                    donnees->monstre[j].x--;
                else if (donnees->monstre[j].tmp < 260)
                    donnees->monstre[j].y--;
                else if (donnees->monstre[j].tmp < 320)
                    donnees->monstre[j].x--;
                else if (donnees->monstre[j].tmp < 360)
                    donnees->monstre[j].x++;
            }
            else if (j == 1)
            {
                if (donnees->monstre[j].tmp < 20)
                    donnees->monstre[j].x++;
                else if (donnees->monstre[j].tmp < 60)
                    donnees->monstre[j].y--;
                else if (donnees->monstre[j].tmp < 140)
                    donnees->monstre[j].x--;
                else if (donnees->monstre[j].tmp < 280)
                    donnees->monstre[j].y++;
                else if (donnees->monstre[j].tmp < 320)
                    donnees->monstre[j].x--;
                else if (donnees->monstre[j].tmp < 360)
                    donnees->monstre[j].y++;
            }
            else if (j == 2)
            {
                if (donnees->monstre[j].tmp < 20)
                    donnees->monstre[j].x--;
                else if (donnees->monstre[j].tmp < 60)
                    donnees->monstre[j].y--;
                else if (donnees->monstre[j].tmp < 140)
                    donnees->monstre[j].x++;
                else if (donnees->monstre[j].tmp < 280)
                    donnees->monstre[j].y++;
                else if (donnees->monstre[j].tmp < 320)
                    donnees->monstre[j].x++;
                else if (donnees->monstre[j].tmp < 360)
                    donnees->monstre[j].y++;
            }
            else
            {
                if (donnees->monstre[j].tmp < 40)
                    donnees->monstre[j].x--;
                else if (donnees->monstre[j].tmp < 80)
                    donnees->monstre[j].y--;
                else if (donnees->monstre[j].tmp < 100)
                    donnees->monstre[j].x++;
                else if (donnees->monstre[j].tmp < 140)
                    donnees->monstre[j].y--;
                else if (donnees->monstre[j].tmp < 200)
                    donnees->monstre[j].x++;
                else if (donnees->monstre[j].tmp < 260)
                    donnees->monstre[j].y--;
                else if (donnees->monstre[j].tmp < 320)
                    donnees->monstre[j].x++;
                else if (donnees->monstre[j].tmp < 360)
                    donnees->monstre[j].x--;
            }
            donnees->monstre[j].tmp++;
        }
        else
        {
            avanceFantomes(donnees->tab, &donnees->monstre[j]);
        }

    if (donnees->vies == 0)
    {
        donnees->page = 1;
    }
}

// void ecrire(char text[12])
// {
//     char a[12]="";
//     if((caractereClavier()==8) && (strcmp(text,"")!=0))
//     {
//         strncpy(a, text, strlen(text)-1);
//         strcat(a,"\0");
//         strcpy(text,a);
//     }
//     else if (caractereClavier() > 31)
//     {
//         for(int i=0; i<11; i++)
//         {
//             if(text[i]=='\0')
//             {
//                 text[i]=caractereClavier();
//                 text[i+1]='\0';
//                 break;
//             }
//         }
//     }
// }
// void clavier(Donnees *donnees){
//     if(donnees->z){
//         ecrire(donnees->text);
//     }

// }

// #include "jeu.h"
// //#include "../Jeu1/Jeu1.h"

// void pageJeu(Donnees *donnees)
// {
//     static DonneesImageRGB *image = NULL;
//     image = lisBMPRGB("./images/pacman5.bmp");
//     if (image != NULL)
//     {
//         ecrisImage((9 * largeurFenetre() / 14 - image->largeurImage), 10 * hauteurFenetre() / 12 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
//     }
//     effaceFenetre(0, 0, 0);
//     couleurCourante(255, 255, 0);
//     epaisseurDeTrait(6);
//     afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10.5 * hauteurFenetre() / 12);
//     epaisseurDeTrait(3);
//     couleurCourante(20, 20, 20);
//     rectangle(4.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
//     couleurCourante(255, 255, 0);
//     afficheChaine("Valider", 40, 5.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
//     afficheChaine("Entrer votre pseudo", 40, 2 * largeurFenetre() / 14, 6.5 * hauteurFenetre() / 12);
//     couleurCourante(20, 20, 20);
//     rectangle(2 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
//     couleurCourante(20, 20, 20);
//     rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
//     couleurCourante(255, 255, 0);
//     afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
// }
// void pageJeu1(Donnees *donnees)
// {
//     affichageMap(donnees->tab,largeurFenetre() / 8,6 * hauteurFenetre() / 7);
//     couleurCourante(255, 255, 0);
//     epaisseurDeTrait(40);
//     cercle(largeurFenetre() / 8 + 20 * donnees->pacman.x, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y, 10);
//     epaisseurDeTrait(3);
//     couleurCourante(20, 20, 20);
//     rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
//     couleurCourante(255, 255, 0);
//     afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
// }

// void CliqueJeu(Donnees *donnees)
// {
//     if (etatBoutonSouris() == GaucheAppuye)
//     {

//         if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
//         {

//             donnees->page = 3;
//             Map(donnees->tab);

//         } // pagejeu1

//         if ((0 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 3.5 * largeurFenetre() / 14) && (1 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 2 * hauteurFenetre() / 12))
//         { //retour
//             donnees->page = 1;
//         }
//         if ((2 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 12.5 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
//         {
//             donnees->z = 1;
//         } //clic zone grise pour activer l'écriture du text
//     }
// }

// void ClavierJeu(Donnees *donnees)
// {
//     touches(donnees->tab, &donnees->pacman);
// }

// void Map(char tab[25][23])
// {
//     FILE *map = fopen("./Fichier/map.txt", "r");
//     if (map != NULL)
//     {
//         for (int i = 0; i < 25; i++)
//         {
//             for (int j = 0; j < 23; j++)
//             {
//                 tab[i][j] = fgetc(map);
//             }
//             fgetc(map);
//         }
//         fclose(map);
//     }
// }

// void touches(char tab[25][23], Pacman *pacman)
// {
//     switch (caractereClavier())
//     {
//     case 'z':
//     case 'Z':
//         if (tab[pacman->y - 1][pacman->x] != '0')
//             pacman->y--;
//         break;
//     case 'q':
//     case 'Q':
//         if (tab[pacman->y][pacman->x - 1] != '0'&& pacman->x != 22)
//             pacman->x--;
//         else if(pacman->x==0)
//         pacman->x=22;
//         break;
//     case 's':
//     case 'S':
//         if (tab[pacman->y + 1][pacman->x] != '0')
//             pacman->y++;
//         break;
//     case 'd':
//     case 'D':
//         if (tab[pacman->y][pacman->x + 1] != '0' && pacman->x != 22)
//             pacman->x++;
//         else if(pacman->x==22)
//         pacman->x=0;
//         break;
//     }
// }

// void affichageMap(char tab[25][23],int x, int y)
// {
//     for (int i = 0; i < 25; i++)
//     {
//         for (int j = 0; j < 23; j++)
//         {
//             if(tab[i][j]=='0'){
//                 couleurCourante(0,0,255);
//                 rectangle(x+20*j-10,y-20*i-10,x+20*j+10,y-20*i+10);
//             }
//             if(tab[i][j]=='.'){
//                 epaisseurDeTrait(4);
//                 couleurCourante(255,255,0);
//                 point(x+20*j,y-20*i);
//             }
//         }
//     }
// }

// }
