#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Object
{
    char name[10];//ne pas ecrire plus de 9 char
    int price;	// la c'est la classe avec le prix

};
typedef struct Object object;	 // la bah c'est une typedef car on change le nom

int i,j,k,c;


int main ()
{
    object poire = {"poire", 50};
    object pomme = {"pomme", 2};
    object banane = {"banane", 100};
		object crevettes = {"crevettes ",23};
		object cactus = {"cactus ",1};
		object vodka = {"vodka ",10};
    //la poire vaut 50 bignous
		object tInventaire[6] = {poire, pomme, banane, crevettes, cactus, vodka};

		for(i=1;i<6;i++) {

		    if (strcmp(tInventaire[i].name, tInventaire[i-1].name) > 0 ) { // si l’élément est mal placé

		        j = 0;

		        while (strcmp(tInventaire[j].name, tInventaire[j-1].name ))j++; // cette boucle sort par j = la nouvelle position de l’élément

		object c = tInventaire[i]; // ces 2 lignes servent a translater les cases en avant pour pouvoir insérer l’élément a sa nouvelle position
		        for( k = i-1 ; k >= j ; k-- )strcpy(tInventaire[k+1].name, tInventaire[k].name); // a revoir le strcpy
		 strcpy(tInventaire[j].name, c.name); // l'insertion
		    }
		}
		for (int i = 0; i<6; i++)
    {
        printf("%s : %d\n",tInventaire[i].name, tInventaire[i].price);
    }

//  if(strcmp(poire.name,pomme.name) == 0 )


//    printf("%d", var);

    return 0;
}
