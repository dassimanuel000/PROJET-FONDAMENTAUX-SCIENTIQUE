#include <stdio.h>
#include <stdlib.h>

int main(){

int choix;

do{
  printf("---------------------------MENU OPERATIONNEL----------------------------------");
  printf("\n 1 : Pour Afficher les données dans l’ordre \n\n 2 : Pour Afficher les données en ordre croissant/décroissant (selon le temps, selon le pouls) \n\n 3 : Pour Rechercher et afficher les données pour un temps particulier \n\n 4 : Pour Afficher la moyenne de pouls dans une plage de temps donnée \n\n 5 : Pour Afficher le nombre de lignes de données actuellement en mémoire \n\n 6 : Pour Rechercher et afficher les max/min de pouls (avec le temps associé) \n");
  scanf("%d", &choix);

	switch(choix)
	{
	case 1:
	printf("ee");
	break;

	case 2:
	printf("wwwwww");
	break;
	}
}while(choix == 0);

return 0;

}
