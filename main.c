#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"
#include "challenge_SZOUAOUI_0.h"

int main()
{

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



    /*
    insererDansArbre(unArbre,creerNoeud(5));
    insererDansArbre(unArbre,creerNoeud(666));
    insererDansArbre(unArbre,creerNoeud(1000));
    insererDansArbre(unArbre,creerNoeud(100));
    insererDansArbre(unArbre,creerNoeud(5));
    insererDansArbre(unArbre,creerNoeud(100));
    */







    /*int i= 3;
    printf("\n---------------------------------------------\n");
    printf("\tChallenge %i pour %s\n",i,"szouaoui");
    printf("\n---------------------------------------------\n");
    challenge_3();
    printf("-----------------------------------------------\n");
    printf("\tFin du Challenge %i\n",i);
    printf("\n---------------------------------------------\n");


    return 0;
    */
}
