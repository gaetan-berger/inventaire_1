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
int gold =50;
int choix ;

int main ()
{
    object banane = {"banane", 50};
    object pomme = {"pomme", 2};
    object crevettes = {"crevettes", 100};
		object cactus = {"cactus ",23};
		object poire = {"poire ",1};
		object vodka = {"vodka ",10};
    //la poire vaut 50 bignous
		object tInventaire[6] = {banane, pomme, crevettes, cactus, poire, vodka};
		for (i = 0 ; i < 6 ; i++)
    {
        printf("%d\n", tInventaire[i]);
    }

		 for(i=1;i<6;i++) {

		   if (strcmp(tInventaire[i].name, tInventaire[i-1].name) < 0 ) { // si l’élément est mal placé

		        j = 0;

		       while (strcmp(tInventaire[j].name, tInventaire[j-1].name) < 0)j++; // cette boucle sort par j = la nouvelle position de l’élément

		object c = tInventaire[i]; // ces 2 lignes servent a translater les cases en avant pour pouvoir insérer l’élément a sa nouvelle position
		        for( k = i-1 ; k >= j ; k-- )strcpy(tInventaire[k+1].name, tInventaire[k].name); // a revoir le strcpy
		 strcpy(tInventaire[j].name, c.name); // l'insertion 	try mais marche pas donc pls la prof
	 }

	// for(i<6;i<0;i--)
	// 		for(j)
		}
		for (int i = 0; i<6; i++)
    {
        printf("%s : %d\n",tInventaire[i].name, tInventaire[i].price);
    }

printf("veux tu achter un truc ? 0 non / 1 oui\n");
	if (choix == 0){
	 printf("merci a toi bonne journee voyageur \n");
	}
	if (choix == 1 ){
		price > gold
		printf("desole mais cela n est pas assez\n");
	}
	else (){
		price < gold
		printf("tener voila garcon \n");
	}




//  if(strcmp(poire.name,pomme.name) == 0 )
//    printf("%d", var);

    return 0;
}
