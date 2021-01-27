#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "../tpGfx/GfxLib.h"
#include "../tpGfx/BmpLib.h"
#include "../tpGfx/ESLib.h"
#define LargeurFenetre 1000
#define HauteurFenetre 800

void gestionEvenement(EvenementGfx evenement);
void traceGraphique();
void cree3matrices(int B[256][256],int V[256][256], int R[256][256], DonneesImageRGB *image);
void negatifimage(int B[256][256],int V[256][256], int R[256][256]);
void couleurniveaudegris(int B[256][256],int V[256][256], int R[256][256], int G[256][256]);
void SeuilDeGris(int B[256][256],int V[256][256], int R[256][256], int G[256][256], int s);
void Symetrie(int B[256][256],int V[256][256], int R[256][256]);
void creeimage(int B[256][256],int V[256][256], int R[256][256], DonneesImageRGB *image);
void Rouge(int B[256][256],int V[256][256], int R[256][256]);
void Vert(int B[256][256],int V[256][256], int R[256][256]);
void Bleu(int B[256][256],int V[256][256], int R[256][256]);
void initHistogramme(int BH[256], int VH[256], int RH[256]);
void Histogramme(int B[256][256],int V[256][256],int R[256][256], int BH[256], int VH[256], int RH[256]);

int main(int argc, char **argv)
{
	initialiseGfx(argc, argv);
	prepareFenetreGraphique("GfxLib", LargeurFenetre, HauteurFenetre);
	lanceBoucleEvenements();
	return 0;
}

void traceGraphique()
{
	couleurCourante(230, 230, 230);
	rectangle(8, hauteurFenetre()-8, largeurFenetre()-8, hauteurFenetre()/4+8);
	rectangle(8, hauteurFenetre()/4-8, largeurFenetre()-8, 8);
	couleurCourante(169, 169, 169);
	//bouton haut
	rectangle(largeurFenetre()/20, 4*hauteurFenetre()/20, 18*largeurFenetre()/80, 5*hauteurFenetre()/40);
	rectangle(11*largeurFenetre()/40, 4*hauteurFenetre()/20, 19*largeurFenetre()/40, 5*hauteurFenetre()/40);
	//bouton bas
	rectangle(largeurFenetre()/20, hauteurFenetre()/10, 9*largeurFenetre()/40, hauteurFenetre()/40);
	rectangle(11*largeurFenetre()/40, 2*hauteurFenetre()/20, 19*largeurFenetre()/40, 5*hauteurFenetre()/150);

	couleurCourante(255, 0, 0);
	rectangle(11*largeurFenetre()/40, hauteurFenetre()/10, 41*largeurFenetre()/120, hauteurFenetre()/40);

	couleurCourante(0, 255, 0);
	rectangle(41*largeurFenetre()/120, hauteurFenetre()/10, 49*largeurFenetre()/120, hauteurFenetre()/40);

	couleurCourante(0, 0, 255);
	rectangle(49*largeurFenetre()/120, hauteurFenetre()/10, 19*largeurFenetre()/40, hauteurFenetre()/40);
	couleurCourante(0, 0, 0);

	rectangle(23*largeurFenetre()/40, 41*hauteurFenetre()/320, 23*largeurFenetre()/40+255, 39*hauteurFenetre()/320);

	epaisseurDeTrait(3);
	afficheChaine("Negatif", 20, largeurFenetre()/10, 3*hauteurFenetre()/20);
	afficheChaine("Niveau de gris", 19, 23*largeurFenetre()/80, 3*hauteurFenetre()/20);
	afficheChaine("Symetrie", 20, largeurFenetre()/10, hauteurFenetre()/20);
	afficheChaine("Filtre Couleur", 21, 23*largeurFenetre()/80, hauteurFenetre()/20);
	
	//cadre histograme
	rectangle(largeurFenetre()/8, hauteurFenetre()/2, largeurFenetre()/8+255, hauteurFenetre()/4+40); //Gauche
	rectangle(largeurFenetre()/2+120, hauteurFenetre()/2, largeurFenetre()/2+120+255, hauteurFenetre()/4+40); //Droite
	
}


void cree3matrices(int B[256][256],int V[256][256], int R[256][256], DonneesImageRGB *image)
{
	for(int a=0;a<256;a++)
	{
		for(int b=0;b<256;b++)
		{
			R[a][b]=image->donneesRGB[((a*image->largeurImage+b)*3)+2];
			V[a][b]=image->donneesRGB[((a*image->largeurImage+b)*3)+1];
			B[a][b]=image->donneesRGB[(a*image->largeurImage+b)*3];
		}
	}
}



void negatifimage(int B[256][256],int V[256][256], int R[256][256])
{
	for(int a=0;a<256;a++)
	{
		for(int b=0;b<256;b++)
		{
			B[a][b]=255-B[a][b];
			V[a][b]=255-V[a][b];
			R[a][b]=255-R[a][b];
		}
	}
}



void couleurniveaudegris(int B[256][256],int V[256][256], int R[256][256], int G[256][256])
{
	for(int a=0;a<256;a++)
	{
		for(int b=0;b<256;b++)
		{
			G[a][b]=0.2125*R[a][b]+0.7154*V[a][b]+0.0721*B[a][b];
			R[a][b]=G[a][b];
			V[a][b]=G[a][b];
			B[a][b]=G[a][b];
		}
	}
}



void SeuilDeGris(int B[256][256],int V[256][256], int R[256][256], int G[256][256], int s)
{
	couleurniveaudegris(B,V,R,G);
	for(int a=0;a<256;a++)
	{
		for(int b=0;b<256;b++)
		{
			if(G[a][b]<s)
			{
				G[a][b]=0;
			}
			else
			{
				G[a][b]=255;
			}
			R[a][b]=G[a][b];
			V[a][b]=G[a][b];
			B[a][b]=G[a][b];
		}
	}
}



void Symetrie(int B[256][256],int V[256][256], int R[256][256])
{
	int a, b;
	int B2[256][256]={0}, V2[256][256]={0}, R2[256][256]={0};
	for(a=0;a<256;a++)
	{
		for(b=0;b<256;b++)
		{
			R2[a][b]=R[a][255-b];
			V2[a][b]=V[a][255-b];
			B2[a][b]=B[a][255-b];
		}
	}
	for(a=0;a<256;a++)
	{
		for(b=0;b<256;b++)
		{
			R[a][b]=R2[a][b];
			V[a][b]=V2[a][b];
			B[a][b]=B2[a][b];
		}
	}
}



void creeimage(int B[256][256],int V[256][256], int R[256][256], DonneesImageRGB *image)
{
	for(int a=0;a<256;a++)
	{
		for(int b=0;b<256;b++)
		{
			image->donneesRGB[(a*image->largeurImage+b)*3]=B[a][b];
			image->donneesRGB[((a*image->largeurImage+b)*3)+1]=V[a][b];
			image->donneesRGB[((a*image->largeurImage+b)*3)+2]=R[a][b];
		}
	}
}



void Rouge(int B[256][256],int V[256][256], int R[256][256])
{
	for(int a=0;a<256;a++)
	{
		for(int b=0;b<256;b++)
		{
			B[a][b]=0;
			V[a][b]=0;
		}
	}
}



void Vert(int B[256][256],int V[256][256], int R[256][256])
{
	for(int a=0;a<256;a++)
	{
		for(int b=0;b<256;b++)
		{
			B[a][b]=0;
			R[a][b]=0;
		}
	}
}




void Bleu(int B[256][256],int V[256][256], int R[256][256])
{
	for(int a=0;a<256;a++)
	{
		for(int b=0;b<256;b++)
		{
			R[a][b]=0;
			V[a][b]=0;
		}
	}
}

void initHistogramme(int BH[256], int VH[256], int RH[256])
{
	for(int v = 0; v < 256; v++)
	{
	BH[v]=0;
	VH[v]=0;
	RH[v]=0;
	}
}

void Histogramme(int B[256][256],int V[256][256],int R[256][256], int BH[256], int VH[256], int RH[256])
{
	for(int a =0; a<256; a++)
	{
		for(int b=0; b<256; b++)
		{
		BH[B[a][b]]++;
		VH[V[a][b]]++;
		RH[R[a][b]]++;
		}
	}
}

void gestionEvenement(EvenementGfx evenement)
{
	static DonneesImageRGB *image = NULL, *modif = NULL;
	static int B[256][256]={0}, V[256][256]={0}, R[256][256]={0}, G[256][256]={0};
	static int a=0, b, s=0;
	static int BL[256][256]={0} , VE[256][256]={0} , RO[256][256]={0};
	static int BH[256]={0}, VH[256]={0}, RH[256]={0} ;
	
	switch (evenement)
	{
		case Initialisation:
			demandeTemporisation(20);
			image = lisBMPRGB("./bmp/flying.bmp");
			modif = lisBMPRGB("./bmp/flying.bmp");
			cree3matrices(B,V,R,image);
			b=23*largeurFenetre()/40+127;
			break;


		case Temporisation:
			rafraichisFenetre();
			break;


		case Affichage:
			effaceFenetre (255, 255, 255);
			traceGraphique();
			if (image != NULL)
			{
				ecrisImage((largeurFenetre()-image->largeurImage)/6, 4*(3*hauteurFenetre()/4-image->hauteurImage)/3, image->largeurImage, image->hauteurImage, image->donneesRGB);
					cree3matrices(BL,VE,RO, image);
					initHistogramme(BH,VH,RH);
					Histogramme(BL,VE,RO,BH,VH,RH);
					for(int i=1 ; i<255; i++){
					epaisseurDeTrait(1);
					couleurCourante(0,0,255);
					ligne(largeurFenetre()/8+i, hauteurFenetre()/4+40, largeurFenetre()/8+i, hauteurFenetre()/4+40+(BH[i])/18);
					couleurCourante(0,255,0);
					ligne(largeurFenetre()/8+i, hauteurFenetre()/4+40, largeurFenetre()/8+i, hauteurFenetre()/4+40+(VH[i])/18);
					couleurCourante(255,0,0);
					ligne(largeurFenetre()/8+i, hauteurFenetre()/4+40, largeurFenetre()/8+i, hauteurFenetre()/4+40+(RH[i])/18);
					}
					
			}
			if (modif != NULL)
			{
				ecrisImage(5*(largeurFenetre()-modif->largeurImage)/6, 4*(3*hauteurFenetre()/4-modif->hauteurImage)/3, modif->largeurImage, modif->hauteurImage, modif->donneesRGB);
				cree3matrices(BL,VE,RO, modif);
					initHistogramme(BH,VH,RH);
					Histogramme(BL,VE,RO,BH,VH,RH);
				for(int i=1 ; i<255; i++)
				{
					epaisseurDeTrait(1);
					couleurCourante(0,0,255);
					ligne(largeurFenetre()/2+120+i, hauteurFenetre()/4+40, largeurFenetre()/2+120+i, hauteurFenetre()/4+40+(BH[i])/18);
					couleurCourante(0,255,0);
					ligne(largeurFenetre()/2+120+i, hauteurFenetre()/4+40, largeurFenetre()/2+120+i, hauteurFenetre()/4+40+(VH[i])/18);
					couleurCourante(255,0,0);
					ligne(largeurFenetre()/2+120+i, hauteurFenetre()/4+40, largeurFenetre()/2+120+i, hauteurFenetre()/4+40+(RH[i])/18);
				}
			}
			couleurCourante(0,0,0);
			if (a==1)
			{
				if ((23*largeurFenetre()/40 <= abscisseSouris()) && (abscisseSouris() <= 23*largeurFenetre()/40+255))
				{
					triangle(abscisseSouris()-15, 51*hauteurFenetre()/320, abscisseSouris()+15, 51*hauteurFenetre()/320, abscisseSouris(), 39*hauteurFenetre()/320);
				}
				else if (abscisseSouris() <= 23*largeurFenetre()/40)
				{
					triangle(23*largeurFenetre()/40-15, 51*hauteurFenetre()/320, 23*largeurFenetre()/40+15, 51*hauteurFenetre()/320, 23*largeurFenetre()/40, 39*hauteurFenetre()/320);
				}
				else if (23*largeurFenetre()/40+255 <= abscisseSouris())
				{
					triangle(23*largeurFenetre()/40+255-15, 51*hauteurFenetre()/320, 23*largeurFenetre()/40+255+15, 51*hauteurFenetre()/320, 23*largeurFenetre()/40+255, 39*hauteurFenetre()/320);
				}
			}
			else
			{
				triangle(b-15, 51*hauteurFenetre()/320, b+15, 51*hauteurFenetre()/320, b, 39*hauteurFenetre()/320);
			}
			break;


		case Clavier:
		if(caractereClavier())
		{
			case 'Q':
			case 'q':
				libereDonneesImageRGB(&image);
				termineBoucleEvenements();
				break;
			}
			break;

		case ClavierSpecial:
			break;

		case BoutonSouris:
			if (etatBoutonSouris() == GaucheAppuye)
			{
				if (((largeurFenetre()-image->largeurImage)/6 <= abscisseSouris()) && (abscisseSouris() <= (largeurFenetre()-image->largeurImage)/6+image->largeurImage) && (8*(3*hauteurFenetre()/4-image->hauteurImage)/6 <= ordonneeSouris()) && (ordonneeSouris() <= 8*(3*hauteurFenetre()/4-image->hauteurImage)/6)+image->hauteurImage)
				{
					cree3matrices(B,V,R,image);
					creeimage(B,V,R,modif);
				}
				if ((2*largeurFenetre()/40 <= abscisseSouris()) && (abscisseSouris() <= 9*largeurFenetre()/40) && (5*hauteurFenetre()/40 <= ordonneeSouris()) && (ordonneeSouris() <= 8*hauteurFenetre()/40 ))
				{
					negatifimage(B,V,R);
					creeimage(B,V,R,modif);
				}
				if ((11*largeurFenetre()/40 <= abscisseSouris()) && (abscisseSouris() <= 19*largeurFenetre()/40) && (5*hauteurFenetre()/40 <= ordonneeSouris()) && (ordonneeSouris() <= hauteurFenetre()/5 ))
				{
					couleurniveaudegris(B,V,R,G);
					creeimage(B,V,R,modif);
				}
				if ((largeurFenetre()/20 <= abscisseSouris()) && (abscisseSouris() <= 9*largeurFenetre()/40) && (hauteurFenetre()/40 <= ordonneeSouris()) && (ordonneeSouris() <= hauteurFenetre()/10 ))
				{
					Symetrie(B,V,R);
					creeimage(B,V,R,modif);
				}
				if ((11*largeurFenetre()/40 <= abscisseSouris()) && (abscisseSouris() <= 41*largeurFenetre()/120) && (hauteurFenetre()/40 <= ordonneeSouris()) && (ordonneeSouris() <= hauteurFenetre()/10 ))
				{
					cree3matrices(B,V,R,image);
					Rouge(B,V,R);
					creeimage(B,V,R,modif);
				}
				if ((41*largeurFenetre()/120 <= abscisseSouris()) && (abscisseSouris() <= 49*largeurFenetre()/120) && (hauteurFenetre()/40 <= ordonneeSouris()) && (ordonneeSouris() <= hauteurFenetre()/10 ))
				{
					cree3matrices(B,V,R,image);
					Vert(B,V,R);
					creeimage(B,V,R,modif);
				}
				if ((49*largeurFenetre()/120 <= abscisseSouris()) && (abscisseSouris() <= 19*largeurFenetre()/40) && (hauteurFenetre()/40 <= ordonneeSouris()) && (ordonneeSouris() <= hauteurFenetre()/10 ))
				{
					cree3matrices(B,V,R,image);
					Bleu(B,V,R);
					creeimage(B,V,R,modif);
				}
				if ((23*largeurFenetre()/40 <= abscisseSouris()) && (abscisseSouris() <= 23*largeurFenetre()/40+255) && (39*hauteurFenetre()/320 <= ordonneeSouris()) && (ordonneeSouris() <= 51*hauteurFenetre()/320 ))
				{
					a=1;
					s = abscisseSouris()-23*largeurFenetre()/40;
					cree3matrices(B,V,R,image);
					SeuilDeGris(B,V,R,G,s);
					creeimage(B,V,R,modif);
					if ((23*largeurFenetre()/40 <= abscisseSouris()) && (abscisseSouris() <= 23*largeurFenetre()/40+255))
					{
						b=abscisseSouris();
					}
				}
				else
				{
					a=0;
				}
			}
			break;

		case Souris:
			if (a==1)
			{
				s = abscisseSouris()-23*largeurFenetre()/40;
				cree3matrices(B,V,R,image);
				SeuilDeGris(B,V,R,G,s);
				creeimage(B,V,R,modif);
				if ((23*largeurFenetre()/40 <= abscisseSouris()) && (abscisseSouris() <= 23*largeurFenetre()/40+255))
				{
					b=abscisseSouris();
				}
			}
			break;

		case Inactivite:
			break;

		case Redimensionnement:
			printf("Largeur : %d\t", largeurFenetre());
			printf("Hauteur : %d\n", hauteurFenetre());
			break;
		  }
}
