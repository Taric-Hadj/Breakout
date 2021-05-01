<<<<<<< HEAD
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
void pageJeu1(Donnees *donnees)
{
    affichageMap(donnees->tab, largeurFenetre() / 8, 6 * hauteurFenetre() / 7);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(40);
    cercle(largeurFenetre() / 8 + 20 * donnees->pacman.x, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y, 8);
    epaisseurDeTrait(3);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
    static int i = 0;
    i++;
    if (i < 15)
    {
        if(donnees->pacman.orientation == 4){
        couleurCourante(0, 0, 0);
        triangle(largeurFenetre() / 8 + 20 * donnees->pacman.x, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y, largeurFenetre() / 8 + 20 * donnees->pacman.x + 10, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y + 10 * tanf(M_PI / 6), largeurFenetre() / 8 + 20 * donnees->pacman.x + 10, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y - 10 * tanf(M_PI / 6));
        }
        else if(donnees->pacman.orientation == 2){
        couleurCourante(0, 0, 0);
        triangle(largeurFenetre() / 8 + 20 * donnees->pacman.x, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y, largeurFenetre() / 8 + 20 * donnees->pacman.x - 10, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y + 10 * tanf(M_PI / 6), largeurFenetre() / 8 + 20 * donnees->pacman.x - 10, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y - 10 * tanf(M_PI / 6));
        }
        else if(donnees->pacman.orientation == 1){
        couleurCourante(0, 0, 0);
        triangle(largeurFenetre() / 8 + 20 * donnees->pacman.x, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y, largeurFenetre() / 8 + 20 * donnees->pacman.x - 10 * tanf(M_PI/6), 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y + 10, largeurFenetre() / 8 + 20 * donnees->pacman.x + 10* tanf(M_PI/6), 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y + 10);
        }
        else if(donnees->pacman.orientation == 3){
        couleurCourante(0, 0, 0);
        triangle(largeurFenetre() / 8 + 20 * donnees->pacman.x, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y, largeurFenetre() / 8 + 20 * donnees->pacman.x - 10 * tanf(M_PI/6), 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y - 10, largeurFenetre() / 8 + 20 * donnees->pacman.x + 10* tanf(M_PI/6), 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y - 10);
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
            donnees->z = (donnees->z)?false:true;
            printf("%d", donnees->z);
        } //clic zone grise pour activer l'écriture du text
    }
}

void ClavierJeu(Donnees *donnees)
{
    touches(donnees->tab, &donnees->pacman);
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
        }
        fclose(map);
    }
}

void touches(char tab[25][23], Pacman *pacman)
{
    switch (caractereClavier())
    {
    case 'z':
    case 'Z':
        if (tab[pacman->y - 1][pacman->x] != '0')
        {
            pacman->y--;
            pacman->orientation = 1;
        }
        break;
    case 'q':
    case 'Q':
        if (tab[pacman->y][pacman->x - 1] != '0' && pacman->x != 23)
        {
            pacman->x--;
            pacman->orientation = 2;
        }
        else if (pacman->x == 0)
        {
            pacman->x = 22;
            pacman->orientation = 2;
        }
        break;
    case 's':
    case 'S':
        if (tab[pacman->y + 1][pacman->x] != '0'){
            pacman->y++;
            pacman->orientation=3;
        }
        break;
    case 'd':
    case 'D':
        if (tab[pacman->y][pacman->x + 1] != '0' && pacman->x != 22){
            pacman->x++;
            pacman->orientation=4;
        }
        else if (pacman->x == 22){
            pacman->x = 0;
            pacman->orientation=4;
        }
        break;
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
            if (tab[i][j]=='@'){
                couleurCourante(238,18,98);
                cercle(x + 20 *j, y- 20 * i,6);
            }

        }
    }
}


void MangeGrain(char tab[25][23], Pacman pacman)
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
    if (tab[pacman.y][pacman.x] == '.')
    {
        tab[pacman.y][pacman.x] = ' ';
    }
    if (tab[pacman.y][pacman.x] == '@')
    {
        tab[pacman.y][pacman.x] = ' ';
    }

}

void TempoJeu(Donnees *donnees)
{
    MangeGrain(donnees->tab, donnees->pacman);
}

void ecrire(char text[12])
{
    char a[12]="";
    if((caractereClavier()==8) && (strcmp(text,"")!=0))
    {
        strncpy(a, text, strlen(text)-1);
        strcat(a,"\0");
        strcpy(text,a);
    }
    else if (caractereClavier() > 31)
    {
        for(int i=0; i<11; i++)
        {
            if(text[i]=='\0')
            {
                text[i]=caractereClavier();
                text[i+1]='\0';
                break;
            }
        }
    }
}
void clavier(Donnees *donnees){
    if(donnees->z){
        ecrire(donnees->text);
    }


}


=======
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
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
}
void pageJeu1(Donnees *donnees)
{
    affichageMap(donnees->tab,largeurFenetre() / 8,6 * hauteurFenetre() / 7);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(40);
    cercle(largeurFenetre() / 8 + 20 * donnees->pacman.x, 6 * hauteurFenetre() / 7 - 20 * donnees->pacman.y, 10);
    epaisseurDeTrait(3);
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
            Map(donnees->tab);

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

void ClavierJeu(Donnees *donnees)
{
    touches(donnees->tab, &donnees->pacman);
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
        }
        fclose(map);
    }
}

void touches(char tab[25][23], Pacman *pacman)
{
    switch (caractereClavier())
    {
    case 'z':
    case 'Z':
        if (tab[pacman->y - 1][pacman->x] != '0')
            pacman->y--;
        break;
    case 'q':
    case 'Q':
        if (tab[pacman->y][pacman->x - 1] != '0'&& pacman->x != 22)
            pacman->x--;
        else if(pacman->x==0)
        pacman->x=22;
        break;
    case 's':
    case 'S':
        if (tab[pacman->y + 1][pacman->x] != '0')
            pacman->y++;
        break;
    case 'd':
    case 'D':
        if (tab[pacman->y][pacman->x + 1] != '0' && pacman->x != 22)
            pacman->x++;
        else if(pacman->x==22)
        pacman->x=0;
        break;
    }
}

void affichageMap(char tab[25][23],int x, int y)
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 23; j++)
        {
            if(tab[i][j]=='0'){
                couleurCourante(0,0,255);
                rectangle(x+20*j-10,y-20*i-10,x+20*j+10,y-20*i+10);
            }
            if(tab[i][j]=='.'){
                epaisseurDeTrait(4);
                couleurCourante(255,255,0);
                point(x+20*j,y-20*i);
            }
        }
    }
}
>>>>>>> parent of b57315b (grains  +  pac man)
