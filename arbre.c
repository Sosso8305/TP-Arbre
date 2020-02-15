#include "arbre.h"
#include <stdlib.h>
#include <stdio.h>

noeud* creerNoeud(int cle){
    noeud* N = malloc(sizeof(noeud));
    N->cle=cle;
    N->FGauche=NULL;
    N->FDroit=NULL;
    N->valeur=1;

    return N;
}

void accroche(noeud* dad, noeud* son){
    if ((son->cle < dad->cle) && (dad->FGauche==NULL)){
        dad->FGauche=son;
        //printf("J'accroche a gauche de %i , le noeud %i \n",dad->cle,son->cle);

    }
    else if ((son->cle > dad->cle) && (dad->FDroit==NULL)){
        dad->FDroit=son;
        //printf("J'accroche a droite de %i , le noeud %i \n",dad->cle,son->cle);
    }

    else{
            printf("Le noeud %i est deja present \n",son->cle);
        }
}




void insererDansArbre(arbre* r, noeud*n){

    if (r->cle == n->cle){
        accroche(r,n);
    }
    else if (n->cle < r->cle) {
        if (r->FGauche == NULL){
            accroche(r,n);
        }
        else{
            insererDansArbre(r->FGauche,n);
        }
    }
    else{
        if (r->FDroit == NULL){
            accroche(r,n);
        }
        else{
            insererDansArbre(r->FDroit,n);
        }
    }

}


void insererTableau(arbre* r,int* tab,int taille){
    int i;
    for(i=0;i<taille;i++){
       insererDansArbre(r,creerNoeud(tab[i]));
    }

}




