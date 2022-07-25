#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	printf("%d\n",valeur_a_trouver);

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
