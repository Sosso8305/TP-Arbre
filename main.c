#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"
#include "challenge_SZOUAOUI_0.h"

int main()
{
/*
    arbre* unArbre =creerNoeud(666);
    int tab[6] ={1000,5,100,1,6,200};
    insererTableau(unArbre,tab,6);

    afficher(unArbre,0);

    couperPetits(unArbre,150);
    //printf("\n \n resul %i",somme(unArbre));

    printf("\n -------------------------- \n");

    //parcoursProfondeur(unArbre);

    afficher(unArbre,0);

*/





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
    //deforestation(noeud1);
    initHauteur(unArbre);

    afficherFonction(unArbre,0,getValeur);





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





/*
    int i= 11;
    printf("\n---------------------------------------------\n");
    printf("\tChallenge %i pour %s\n",i,"szouaoui");
    printf("\n---------------------------------------------\n");
    challenge_11();
    printf("\n-----------------------------------------------\n");
    printf("\tFin du Challenge %i\n",i);
    printf("\n---------------------------------------------\n");

*/
    return 0;

}
