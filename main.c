#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"
#include "challenge_SZOUAOUI_0.h"

int main()
{
/*
    arbre* unArbre=NULL;
    unArbre=creerNoeud(666);

    int tab[10] = {1,45,800,-40,300,4,5,33,1001,700};


    noeud* noeud1 = creerNoeud(5);
    noeud* doublon = creerNoeud(666);
    noeud* noeud2 =creerNoeud(1000);
    noeud* noeud3= creerNoeud(100);


    accroche(unArbre,noeud1);
    accroche(unArbre,doublon);
    accroche(unArbre,noeud2);
    accroche(noeud1,noeud3);


    insererTableau(unArbre,tab,10);


    afficher(unArbre,0);
    printf("\n\n\n");
    deforestationSauvage(noeud1);

    afficher(unArbre,0);




*/






/*
    noeud* cherche100 = rechercher(unArbre,100);
    printf("noeud 100:%i\n",getCle(cherche100));
    if (cherche100 != NULL){
        printf("J ai trouve le noeud 100.\n");
    }


    noeud* cherche101 = rechercher(unArbre,101);
    printf("noeud 101:%i\n",getCle(cherche101));
    if (cherche101 != NULL){
        printf("J ai trouve le noeud 101.\n");
    }


*/


/*
    afficherFonction(unArbre,0,getCle);
    printf("\n");
    afficherFonction(unArbre,0,getValeur);
*/


    /*
    insererDansArbre(unArbre,creerNoeud(5));
    insererDansArbre(unArbre,creerNoeud(666));
    insererDansArbre(unArbre,creerNoeud(1000));
    insererDansArbre(unArbre,creerNoeud(100));
    insererDansArbre(unArbre,creerNoeud(5));
    insererDansArbre(unArbre,creerNoeud(100));
    */







    int i= 8;
    printf("\n---------------------------------------------\n");
    printf("\tChallenge %i pour %s\n",i,"szouaoui");
    printf("\n---------------------------------------------\n");
    challenge_8();
    printf("\n-----------------------------------------------\n");
    printf("\tFin du Challenge %i\n",i);
    printf("\n---------------------------------------------\n");


    return 0;

}
