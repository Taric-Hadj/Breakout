#include "menu.h"

void accueil(Donnees *donnees)
{
    static DonneesImageRGB *image = NULL;
    image = lisBMPRGB("./images/pacman5.bmp");
    if (image != NULL)
    {
        ecrisImage((9 * largeurFenetre() / 14 - image->largeurImage), 10 * hauteurFenetre() / 12 - image->hauteurImage, image->largeurImage, image->hauteurImage, image->donneesRGB);
    }
 
    
    if(donnees->valAffichage == 0 || donnees->valAffichage == 1)
		{	
			if(donnees->valLangue == 0 || donnees->valLangue == 1)
			{
				couleurCourante(255, 255, 0);
				epaisseurDeTrait(6);
				afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10.5 * hauteurFenetre() / 12);
				//
				couleurCourante(20, 20, 20);
				rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 10 * largeurFenetre() / 14, 6 * hauteurFenetre() / 12);
				epaisseurDeTrait(4);
				couleurCourante(255, 255, 0);
				afficheChaine("Jouer", 60, 5.5 * largeurFenetre() / 14, 6.5 * hauteurFenetre() / 12);
				//
				couleurCourante(20, 20, 20);
				rectangle(1.5 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 0);
				epaisseurDeTrait(3);
				afficheChaine("Options", 40, 2 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
				//
				couleurCourante(20, 20, 20);
				rectangle(8 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 0);
				epaisseurDeTrait(3);
				afficheChaine("Score", 40, 9 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
				//
				couleurCourante(20, 20, 20);
				rectangle(4.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 0);
				epaisseurDeTrait(3);
				afficheChaine("Quitter", 40, 5.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);// FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS SOMBRE FRANCAIS
			}
				
			if(donnees->valLangue == 2)
			{
				couleurCourante(255, 255, 0);
				epaisseurDeTrait(6);
				afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10.5 * hauteurFenetre() / 12);
				//
				couleurCourante(20, 20, 20);
				rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 10 * largeurFenetre() / 14, 6 * hauteurFenetre() / 12);
				epaisseurDeTrait(4);
				couleurCourante(255, 255, 0);
				afficheChaine("Play", 60, 5.5 * largeurFenetre() / 14, 6.5 * hauteurFenetre() / 12);
				//
				couleurCourante(20, 20, 20);
				rectangle(1.5 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 0);
				epaisseurDeTrait(3);
				afficheChaine("Options", 40, 2 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
				//
				couleurCourante(20, 20, 20);
				rectangle(8 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 0);
				epaisseurDeTrait(3);
				afficheChaine("Score", 40, 9 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
				//
				couleurCourante(20, 20, 20);
				rectangle(4.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 0);
				epaisseurDeTrait(3);
				afficheChaine("Quit", 40, 5.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);// FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS SOMBRE ANGLAIS
			}
		}
			
		if(donnees->valAffichage == 2)
		{
			if(donnees->valLangue == 0 || donnees->valLangue == 1)
			{
				effaceFenetre(255, 248, 240);
				//
				couleurCourante(0, 0, 0);
				epaisseurDeTrait(6);
				afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10.5 * hauteurFenetre() / 12);
				//
				couleurCourante(214, 95, 0);
				rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 10 * largeurFenetre() / 14, 6 * hauteurFenetre() / 12);
				epaisseurDeTrait(4);
				couleurCourante(255, 255, 255);
				afficheChaine("Jouer", 60, 5.5 * largeurFenetre() / 14, 6.4 * hauteurFenetre() / 12);
				//
				couleurCourante(255, 215, 0);
				rectangle(1.5 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 255);
				epaisseurDeTrait(3);
				afficheChaine("Options", 40, 2 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
				//
				couleurCourante(255, 215, 0);
				rectangle(8 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 255);
				epaisseurDeTrait(3);
				afficheChaine("Score", 40, 9 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
				//
				couleurCourante(255, 215, 0);
				rectangle(4.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 255);
				epaisseurDeTrait(3);
				afficheChaine("Quitter", 40, 5.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);// FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS CLAIR FRANCAIS
			}
				
			if(donnees->valLangue == 2)
			{
				effaceFenetre(255, 248, 240);
				//
				couleurCourante(0, 0, 0);
				epaisseurDeTrait(6);
				afficheChaine("PacMan", 80, 4 * largeurFenetre() / 14, 10.5 * hauteurFenetre() / 12);
				//
				couleurCourante(214, 95, 0);
				rectangle(4.5 * largeurFenetre() / 14, 7.5 * hauteurFenetre() / 12, 10 * largeurFenetre() / 14, 6 * hauteurFenetre() / 12);
				epaisseurDeTrait(4);
				couleurCourante(255, 255, 255);
				afficheChaine("Play", 60, 5.8 * largeurFenetre() / 14, 6.4 * hauteurFenetre() / 12);
				//
				couleurCourante(255, 215, 0);
				rectangle(1.5 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 6 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 255);
				epaisseurDeTrait(3);
				afficheChaine("Options", 40, 2 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
				//
				couleurCourante(255, 215, 0);
				rectangle(8 * largeurFenetre() / 14, 5 * hauteurFenetre() / 12, 12.5 * largeurFenetre() / 14, 3.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 255);
				epaisseurDeTrait(3);
				afficheChaine("Score", 40, 9 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12);
				//
				couleurCourante(255, 215, 0);
				rectangle(4.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
				couleurCourante(255, 255, 255);
				epaisseurDeTrait(3);
				afficheChaine("Quit", 40, 6 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS CLAIR ANGLAIS
			}
		}
}

void CliqueMenu(Donnees *donnees)
{
    if (etatBoutonSouris() == GaucheAppuye)
    {

        //jouer
        
            if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 10 * largeurFenetre() / 14) && (6 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 7.5 * hauteurFenetre() / 12))
            {
                donnees->page = 2;
            }

            //score
            if ((8 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 12.5 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
            {
                donnees->page = 4;
            }
            //quitter

            if ((4.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 9.5 * largeurFenetre() / 14) && (1.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 3 * hauteurFenetre() / 12))
            {
                termineBoucleEvenements();
            }
            //options
            if ((1.5 * largeurFenetre() / 14 <= abscisseSouris()) && (abscisseSouris() <= 6 * largeurFenetre() / 14) && (3.5 * hauteurFenetre() / 12 <= ordonneeSouris()) && (ordonneeSouris() <= 5 * hauteurFenetre() / 12))
            {
                donnees->page = 4;
            }
        }
    }
