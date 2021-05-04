#include "option.h"


void pageOption(Donnees * donnees)
{
    
    effaceFenetre(0, 0, 0);
    //Credits
    couleurCourante(20, 20, 20);
    rectangle(4.5 * largeurFenetre() / 14, 4 * hauteurFenetre() / 12, 9.5 * largeurFenetre() / 14, 2.5 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    epaisseurDeTrait(3);
    afficheChaine("Credits", 40, 5.5 * largeurFenetre() / 14, 3 * hauteurFenetre() / 12);
    couleurCourante(20, 20, 20);
    rectangle(0 * largeurFenetre() / 14, 1 * hauteurFenetre() / 12, 3.5 * largeurFenetre() / 14, 2 * hauteurFenetre() / 12);
    couleurCourante(255, 255, 0);
    afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 1.5 * hauteurFenetre() / 12);
    
    			
		if(donnees->valCredits == 0)
		{
			if(donnees->valAffichage == 0 || donnees->valAffichage == 1)
			{	
				if(donnees->valLangue == 0 || donnees->valLangue == 1)
				{
					afficheOptionsSF(); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS SOMBRE FRANCAIS
				}
				
				if(donnees->valLangue == 2)
				{
					afficheOptionsSA(); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS SOMBRE ANGLAIS
				}
			}
			
			if(donnees->valAffichage == 2)
			{
				if(donnees->valLangue == 0 || donnees->valLangue == 1)
				{
					afficheOptionsCF(); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS CLAIR FRANCAIS
				}
				
				if(donnees->valLangue == 2)
				{
					afficheOptionsCA(); // FONCTION AFFICHAGE PAGE MUTATEUR OPTIONS CLAIR ANGLAIS
				}
			}
		}
}



void CliqueOption(Donnees * donnees) 
{
    if(etatBoutonSouris() == GaucheAppuye)
    {
		donnees->valAffichage = affichage(		donnees->valAffichage); // OPTION SOMBRE OU CLAIR
		donnees->valLangue = langue(donnees->valLangue); // OPTION FRANCAIS OU ANGLAIS
		donnees->page = credits(donnees->page); // AFFICHAGE PAGE CREDITS
		retour(donnees); // ARRET DU PROGRAMME
	}
}


// FONCTION AFFICHAGE PAGE OPTION SOMBRE FRANCAIS
void afficheOptionsSF()
{
	// FOND NOIR
    effaceFenetre(0, 0, 0);
    
    // TEXTE OPTIONS
    couleurCourante(255, 255, 255);
    epaisseurDeTrait(6);
    afficheChaine("OPTIONS", 60, 43*Ux, 88*Uy);
    
    // RECTANGLE AFFICHAGE
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 81.2*Uy, 42.8*Ux, 68.1*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("AFFICHAGE", 30, 14*Ux, 73*Uy);
    
    // RECTANGLE SOMBRE
    couleurCourante(255, 215, 0);
    rectangle(32.2*Ux, 62.5*Uy, 57.1*Ux, 53.2*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("SOMBRE", 20, 40*Ux, 56*Uy);
    
    // RECTANGLE CLAIR
    couleurCourante(255, 215, 0);
    rectangle(64*Ux, 62.5*Uy, 89*Ux, 53.2*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("CLAIR", 20, 73*Ux, 56*Uy);
    
    // RECTANGLE FRANCAIS
    couleurCourante(255, 215, 0);
    rectangle(32.2*Ux, 30.5*Uy, 57.1*Ux, 21.5*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("FRANCAIS", 20, 40*Ux, 24*Uy);
    
    // RECTANGLE ENGLISH
    couleurCourante(255, 215, 0);
    rectangle(64*Ux, 30.5*Uy, 89*Ux, 21.5*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("ANGLAIS", 20, 70*Ux, 24*Uy);
    
    // RECTANGLE LANGUE
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 48*Uy , 42.8*Ux, 35*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("LANGUE", 30, 20*Ux, 39*Uy);
    
    // RECTANGLE CREDITS
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 15.5*Uy , 42.8*Ux, 4*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("CREDITS", 30, 20*Ux, 7.5*Uy);
   
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(75*Ux, 10*Uy, 100*Ux, 0*Uy);
    epaisseurDeTrait(3);
    couleurCourante(255, 255, 255);
    afficheChaine("RETOUR", 20, 82.5*Ux, 3*Uy);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE OPTIONS SOMBRE ANGLAIS
void afficheOptionsSA()
{
	// FOND NOIR
    effaceFenetre(0, 0, 0);
    
    // TEXTE OPTIONS
    couleurCourante(255, 255, 255);
    epaisseurDeTrait(6);
    afficheChaine("OPTIONS", 60, 43*Ux, 88*Uy);	

    // RECTANGLE AFFICHAGE
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 81.2*Uy, 42.8*Ux, 68.1*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("DISPLAY", 30, 14*Ux, 73*Uy);
    
    // RECTANGLE SOMBRE
    couleurCourante(255, 215, 0);
    rectangle(32.2*Ux, 62.5*Uy, 57.1*Ux, 53.2*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("DARK", 20, 40*Ux, 56*Uy);
    
    // RECTANGLE CLAIR
    couleurCourante(255, 215, 0);
    rectangle(64*Ux, 62.5*Uy, 89*Ux, 53.2*Uy);
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("LIGHT", 20, 73*Ux, 56*Uy);
    
    // RECTANGLE FRANCAIS
    couleurCourante(255, 215, 0);
    rectangle(32.2*Ux, 30.5*Uy, 57.1*Ux, 21.5*Uy);
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("FRENCH", 20, 40*Ux, 24*Uy);
    
    // RECTANGLE ENGLISH
    couleurCourante(255, 215, 0);
    rectangle(64*Ux, 30.5*Uy, 89*Ux, 21.5*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("ENGLISH", 20, 70*Ux, 24*Uy);
    
    // RECTANGLE LANGUE
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 48*Uy , 42.8*Ux, 35*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("LANGUAGE", 30, 13*Ux, 39*Uy);
    
    // RECTANGLE CREDITS
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 15.5*Uy , 42.8*Ux, 4*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("CREDITS", 30, 20*Ux, 7.5*Uy);
   
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(75*Ux, 10*Uy, 100*Ux, 0*Uy);
    epaisseurDeTrait(3);
    couleurCourante(255, 255, 255);
    afficheChaine("BACK", 20, 82.5*Ux, 3*Uy);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE OPTION CLAIR FRANCAIS
void afficheOptionsCF()
{
	// FOND BLANC
    effaceFenetre(255, 248, 240);
    
    // TEXTE OPTIONS
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(6);
    afficheChaine("OPTIONS", 60, 43*Ux, 88*Uy);

    // RECTANGLE AFFICHAGE
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 81.2*Uy, 42.8*Ux, 68.1*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("AFFICHAGE", 30, 14*Ux, 73*Uy);
    
    // RECTANGLE SOMBRE
    couleurCourante(255, 215, 0);
    rectangle(32.2*Ux, 62.5*Uy, 57.1*Ux, 53.2*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("SOMBRE", 20, 40*Ux, 56*Uy);
    
    // RECTANGLE CLAIR
    couleurCourante(255, 215, 0);
    rectangle(64*Ux, 62.5*Uy, 89*Ux, 53.2*Uy);
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("CLAIR", 20, 73*Ux, 56*Uy);
    
    // RECTANGLE FRANCAIS
    couleurCourante(255, 215, 0);
    rectangle(32.2*Ux, 30.5*Uy, 57.1*Ux, 21.5*Uy);
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("FRANCAIS", 20, 40*Ux, 24*Uy);
    
    // RECTANGLE ENGLISH
    couleurCourante(255, 215, 0);
    rectangle(64*Ux, 30.5*Uy, 89*Ux, 21.5*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("ANGLAIS", 20, 70*Ux, 24*Uy);
    
    // RECTANGLE LANGUE
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 48*Uy , 42.8*Ux, 35*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("LANGUE", 30, 20*Ux, 39*Uy);
    
    // RECTANGLE CREDITS
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 15.5*Uy , 42.8*Ux, 4*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("CREDITS", 30, 20*Ux, 7.5*Uy);
   
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(75*Ux, 10*Uy, 100*Ux, 0*Uy);
    epaisseurDeTrait(3);
    couleurCourante(255, 255, 255);
    afficheChaine("RETOUR", 20, 82.5*Ux, 3*Uy);
    couleurCourante(150,56,53);
}


// FONCTION AFFICHAGE PAGE OPTIONS CLAIR ANGLAIS
void afficheOptionsCA()
{
	// FOND BLANC
    effaceFenetre(255, 248, 240);
    
    // TEXTE OPTIONS
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(6);
    afficheChaine("OPTIONS", 60, 43*Ux, 88*Uy);	

    // RECTANGLE AFFICHAGE
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 81.2*Uy, 42.8*Ux, 68.1*Uy);    
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("DISPLAY", 30, 14*Ux, 73*Uy);
    
    // RECTANGLE SOMBRE
    couleurCourante(255, 215, 0);
    rectangle(32.2*Ux, 62.5*Uy, 57.1*Ux, 53.2*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("DARK", 20, 40*Ux, 56*Uy);
    
    // RECTANGLE CLAIR
    couleurCourante(255, 215, 0);
    rectangle(64*Ux, 62.5*Uy, 89*Ux, 53.2*Uy);
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("LIGHT", 20, 73*Ux, 56*Uy);
    
    // RECTANGLE FRANCAIS
    couleurCourante(255, 215, 0);
    rectangle(32.2*Ux, 30.5*Uy, 57.1*Ux, 21.5*Uy);
    couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("FRENCH", 20, 40*Ux, 24*Uy);
    
    // RECTANGLE ENGLISH
    couleurCourante(255, 215, 0);
    rectangle(64*Ux, 30.5*Uy, 89*Ux, 21.5*Uy);
	couleurCourante(0, 0, 0);
    epaisseurDeTrait(3);
	couleurCourante(220, 116, 48);
    afficheChaine("ENGLISH", 20, 70*Ux, 24*Uy);
    
    // RECTANGLE LANGUE
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 48*Uy , 42.8*Ux, 35*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("LANGUAGE", 30, 13*Ux, 39*Uy);
    
    // RECTANGLE CREDITS
    couleurCourante(214, 95, 0);
    rectangle(10.8*Ux, 15.5*Uy , 42.8*Ux, 4*Uy);
    epaisseurDeTrait(4);
    couleurCourante(255, 255, 255);
    afficheChaine("CREDITS", 30, 20*Ux, 7.5*Uy);
   
    // RECTANGLE RETOUR
    couleurCourante(140, 130, 140);
    rectangle(75*Ux, 10*Uy, 100*Ux, 0*Uy);
    epaisseurDeTrait(3);
    couleurCourante(255, 255, 255);
    afficheChaine("BACK", 20, 82.5*Ux, 3*Uy);
    couleurCourante(150,56,53);
}



// FONCTION TOUCHE AFFICHAGE
int affichage(int valAffichage)
{	
	if(abscisseSouris() >= (4.5 * largeurFenetre() / 14)  && abscisseSouris() <= (8 * largeurFenetre() / 14) && ordonneeSouris() >= 3.2 * hauteurFenetre() / 6 && ordonneeSouris() <= (7.5 * hauteurFenetre() / 12))
	{	
		printf("|           Affichage sombre           |\n");
	    printf("|                                      | \n");
		valAffichage = 1;
	}
	
	if(abscisseSouris() >= (9 * largeurFenetre() / 14)  && abscisseSouris() <= (12.5 * largeurFenetre() / 14) && ordonneeSouris() >= 3.2 * hauteurFenetre() / 6 && ordonneeSouris() <= (7.5 * hauteurFenetre() / 12))
	{
		printf("|           Affichage clair            |\n");
	    printf("|                                      | \n");
		valAffichage = 2;
	}
	
	return valAffichage;
}


// FONCTION TOUCHE LANGUE
int langue(int valLangue)
{
	if(abscisseSouris() >= (4.5 * largeurFenetre() / 14)  && abscisseSouris() <= (8 * largeurFenetre() / 14) && ordonneeSouris() >= (2.5 * hauteurFenetre() / 12) && ordonneeSouris() <= (3.65 * hauteurFenetre() / 12))
	{	
		printf("|               Français               |\n");
	    printf("|                                      | \n");
		valLangue = 1;
	}
	
	if(abscisseSouris() >= (9 * largeurFenetre() / 14)  && abscisseSouris() <= (12.5 * largeurFenetre() / 14) && ordonneeSouris() >= (2.5 * hauteurFenetre() / 12) && ordonneeSouris() <= 3.65 * hauteurFenetre() / 12)
	{	
		printf("|                Anglais               |\n");
	    printf("|                                      | \n");
		valLangue = 2;
	}
	
	return valLangue;
}


// FONCTION TOUCHE CREDITS
int credits(int page)
{	
	if(abscisseSouris() >= (1.5 * largeurFenetre() / 14)  && abscisseSouris() <= (6 * largeurFenetre() / 14) && ordonneeSouris() >= (0.25 * hauteurFenetre() / 6) && ordonneeSouris() <= (1.8 * hauteurFenetre() / 12))
	{	
		page = 5;	
	}
	
	return page;
}


// FONCTION TOUCHE RETOUR
void retour(Donnees *donnees)
{
	if(abscisseSouris() >= (3 * largeurFenetre() / 4)  && abscisseSouris() <= (largeurFenetre()) && ordonneeSouris() >= 0 && ordonneeSouris() <= (1.2 * hauteurFenetre() / 12))
	{
		donnees->page = 1;
	}
}
