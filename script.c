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

int main()
{
	int valeur_a_trouver;
	srand(time(NULL));
	valeur_a_trouver = rand() % 100;
	printf("%d\n",valeur_a_trouver);

	int choix_joueur;
	do
	{
		printf("Entrez votre choix \n");
		scanf("%d",&choix_joueur);
		plus_moins(choix_joueur, valeur_a_trouver);
	} while(choix_joueur!=valeur_a_trouver);

}
