#include "sous_traitance.h"

void afficheScore(Donnees *donnees)
{
	epaisseurDeTrait(4);
	couleurCourante(255, 255, 0);
	rectangle(0, hauteurFenetre(), 3.5 * largeurFenetre() / 14, 11 * hauteurFenetre() / 12);
	couleurCourante(0, 0, 0);
	afficheChaine("Retour", 35, 0.5 * largeurFenetre() / 14, 11.3 * hauteurFenetre() / 12);

	couleurCourante(255, 255, 0);
	afficheChaine("Meilleurs", 45, 5.2 * largeurFenetre() / 14, 11 * hauteurFenetre() / 12);
	afficheChaine("Scores", 45, 5.6 * largeurFenetre() / 14, 10.2 * hauteurFenetre() / 12);

	classe(donnees->sb);
	classement(donnees->sb);
	enregistre(donnees->sb);
	for (int i = 0; i < 10; i++)
	{
		char rang[5] = "";
		sprintf(rang, "%d", i + 1);
		couleurCourante(255, 255, 0);
		epaisseurDeTrait(4);
		afficheChaine(rang, 40, 0.6 * largeurFenetre() / 14, 9.3 * hauteurFenetre() / 12 - i * hauteurFenetre() / 12);
		sprintf(rang, "%d", donnees->sb[i].score);
		afficheChaine(rang, 40, 5.4 * largeurFenetre() / 14, 9.3 * hauteurFenetre() / 12 - i * hauteurFenetre() / 12);
		afficheChaine(donnees->sb[i].pseudo, 40, 10 * largeurFenetre() / 14, 9.3 * hauteurFenetre() / 12 - i * hauteurFenetre() / 12);
	}
}
void classe(Scoreboard *sb)
{
	int imin;
	Scoreboard min, tmp;
	for(int i = 0; i < 10; i++){
		imin = i;
		min = sb[i];
		for(int j = i+1;j<10;j++){
			if(sb[j].score > min.score){
				min = sb[j];
				imin = j;
			}
		}
		tmp = sb[imin];
		sb[imin] = sb[i];
		sb[i] = tmp;
	}
}
void enregistre(Scoreboard *scoreboard)
{
	FILE *file = fopen("./utilisateurs.txt", "w");
	if (file != NULL)
	{
		for (int i = 0; i < 10; i++)
			fprintf(file, "[Pseudo:%s | Score:%d]\n", scoreboard[i].pseudo, scoreboard[i].score);
		fclose(file);
	}
}

void classement(Scoreboard *scoreboard)
{
	FILE *file = fopen("./classement.txt", "w");
	if (file != NULL)
	{
		for (int i = 0; i < 10; i++)
			fprintf(file, "%d	%s	 %d\n", i + 1, scoreboard[i].pseudo, scoreboard[i].score);
		fclose(file);
	}
}

void cliqueScore(Donnees *donnees)
{
	if (etatBoutonSouris() == GaucheAppuye)
	{
		if (0 <= abscisseSouris() && abscisseSouris() <= 3.5 * largeurFenetre() / 14 && 11 * hauteurFenetre() / 12 < ordonneeSouris() && ordonneeSouris() < hauteurFenetre())
		{
			//retour au menu
		}
	}
}