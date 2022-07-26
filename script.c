
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mode_multi(int valeur_a_trouver)
{
	int no_coups;
	int trouver = 0;
	int compteur1=0;
	int compteur2=0;
	int score_joueur1=0;
	int score_joueur2=0;

	do
	{
	printf("Joueur Choisissez un nombre de coups superieur a 10 \n");
	scanf("%d", &no_coups);
	if(no_coups<10)
		{
		printf("Erreur! Le chiffre doit etre plus grand que 10");
		}
	}while(no_coups<10);

	printf("Joueur 1 a votre tour \n");
	do
	{
		int choix_joueur;
		printf("Entrez votre choix \n");
	        scanf("%d",&choix_joueur);

                compteur1=compteur1+1;

		if(choix_joueur<valeur_a_trouver)
	        {
	                printf("Plus! ");
	        }

        	else if(choix_joueur>valeur_a_trouver)
        	{
                	printf("Moins! ");
        	}

        	else if(choix_joueur=valeur_a_trouver)
        	{
	                printf("Bingo! ");
			trouver=1;
			score_joueur1 = no_coups - (compteur1-1);
			printf("Votre score est: %d\n", score_joueur1);
        	}

        } while((trouver==0)&&(compteur1<no_coups));


	trouver=0;
	printf("Joueur 2 a votre tour \n");
        do
        {
                int choix_joueur;
                printf("Entrez votre choix \n");
                scanf("%d",&choix_joueur);

                compteur2=compteur2+1;

                if(choix_joueur<valeur_a_trouver)
                {
                        printf("Plus! ");
                }

                else if(choix_joueur>valeur_a_trouver)
                {
                        printf("Moins! ");
                }

                else if(choix_joueur=valeur_a_trouver)
                {
                        printf("Bingo! ");
                        trouver=1;
                        score_joueur2 = no_coups -(compteur2-1);
                        printf("Votre score est: %d\n", score_joueur2);
                }

        } while(trouver==0&&compteur2<no_coups);

	if(score_joueur1>score_joueur2)
        {
                printf("Joueur 1 a gagner! Felicitations ");
        }

        else if(score_joueur2>score_joueur1)
        {
                printf("Joueur 2 a gagner! Felicitations ");
        }

        else if(score_joueur1==score_joueur2)
        {
                printf("C'est un match nul! ");
        }


}


void plus_moins(int choix_joueur, int valeur_a_trouver)
{

	if(choix_joueur<valeur_a_trouver)
	{
		printf("Plus! ");
	}

	else if(choix_joueur>valeur_a_trouver)
        {
                printf("Moins! ");
        }

	else if(choix_joueur=valeur_a_trouver)
        {
                printf("Bingo! ");
        }
}

void facile(int valeur_a_trouver)
{
	int choix_joueur;
        do
        {
                printf("Entrez votre choix \n");
                scanf("%d",&choix_joueur);
                plus_moins(choix_joueur, valeur_a_trouver);
        } while(choix_joueur!=valeur_a_trouver);
}

void moyen(int valeur_a_trouver)
{
	int choix_joueur;
        for(int i=0; i<25; i++)
        {
                printf("Entrez votre choix \n");
                scanf("%d",&choix_joueur);
                plus_moins(choix_joueur, valeur_a_trouver);
        }
	printf("Avec 25 chance c'est difficile de ne pas avoir le bon chiffre.");
	printf(" On va croire que vous etes con. ");
}

void difficile(int valeur_a_trouver)
{
	int choix_joueur; 
        for(int i=0; i<10; i++)

        {
                printf("Entrez votre choix \n");
                scanf("%d",&choix_joueur);
                plus_moins(choix_joueur, valeur_a_trouver);
        }
	printf("Vous ferez mieux la prochaine fois");
}

int main()
{
	int valeur_a_trouver;
	srand(time(NULL));
	valeur_a_trouver = rand() % 100;


	int mode;
	printf("Choisissez votre mode de jeu: -----1.Joueur Seul -----2.Multijoueur----- \n");
	scanf("%d", &mode);

	if(mode==1)
	{
		int difficulter;
		printf("Choisissez un mode de difficulter: 1.Facile, 2.Moyen, 3.Difficile: ");
		scanf("%d", &difficulter);

		if(difficulter==1)
		{
			facile(valeur_a_trouver);
		}

		else if(difficulter==2)
        	{
        	        moyen(valeur_a_trouver);
        	}

		else if(difficulter==3)
        	{
        	        difficile(valeur_a_trouver);
        	}
	}
	else if(mode==2)
	{

		int tour=0;
		printf("Choisissez le nombre de tour auquel vous voulez jouez: \n");
		scanf("%d",&tour);

		for(int j=0; j<tour; j++)
		{

			int valeur_a_trouver2;
                        srand(time(NULL));
                        valeur_a_trouver2 = rand() % 100;
			mode_multi(valeur_a_trouver2);
			printf("---- Prochaine manche!----\n ");

		}
	}
}
