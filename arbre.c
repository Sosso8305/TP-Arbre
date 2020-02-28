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
        dad->valeur+=1;
        }
}




void insererDansArbre(arbre* r, noeud*n){

    if (r->cle == n->cle){
        accroche(r,n);
        free(n);
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


void afficher(arbre* r,int decalage){
    if (r != NULL){
        printf("%-6i",r->cle);

        if(r->FDroit != NULL){
            afficher(r->FDroit,decalage+6);
        }

        if(r->FGauche != NULL){
            printf("\n");

            int i;
            for(i=0;i<=(decalage-1);i++){
                printf(" ");
            }

            printf("|\n");

            for(i=0;i<=(decalage-1);i++){
                printf(" ");
            }

            afficher(r->FGauche,decalage);
        }
    }
}


int getCle(arbre* r){
    if (r != NULL){
        return r->cle;
    }
    return 0;
}


int getValeur(arbre* r){
    if (r != NULL){
        return r->valeur;
    }
    return 0;
}

void afficherFonction(arbre* r,int decalage, int (*mafct)(arbre* r)){
    if (r != NULL){
        printf("%-6i",mafct(r));

        if(r->FDroit != NULL){
            afficherFonction(r->FDroit,decalage+6,mafct);
        }

        if(r->FGauche != NULL){
            printf("\n");

            int i;
            for(i=0;i<=(decalage-1);i++){
                printf(" ");
            }

            printf("|\n");

            for(i=0;i<=(decalage-1);i++){
                printf(" ");
            }

            afficherFonction(r->FGauche,decalage,mafct);
        }
    }

}


/////////////////////FONCTION OVER////////////////////////////
/*
void copyNoeud(noeud* Origin ,noeud* Cop){
    Cop->cle=getCle(Origin);
    Cop->valeur= getValeur(Origin);
    Cop->FGauche=Origin->FGauche;
    Cop->FDroit=Origin->FDroit;

}




noeud* rechercherMemo(arbre* r, int v,noeud* memo){                          //ces différentes fonction marchées mais je retourné l'adresse d'un neoud copié
    if(getCle(r) == v){
        copyNoeud(r,memo);

    }

    if(getCle(r->FGauche) != 0){
        rechercherMemo(r->FGauche,v,memo);
    }

    if( getCle(r->FDroit) !=0){
        rechercherMemo(r->FDroit,v,memo);
    }

    return memo;

}


noeud* rechercher(arbre* r,int v){
    noeud* m =creerNoeud(0);
    noeud* m1=rechercherMemo(r,v,m);
    if (getCle(m1)!=0){
        return m1;
    }
    return NULL;
}
*/
/////////////////////////FIN FONCTION OVER////////////////////////////


noeud* rechercher(arbre* r, int v){

    if(getCle(r) == v){
        return r;
    }
    else if (getCle(r)> v){
        rechercher(r->FGauche,v);
    }
    else {
        rechercher(r->FDroit,v);
    }



}

noeud* rechercherDerniereLettre(arbre* UnArbre){
    int var= 'I';
    noeud* m =rechercher(UnArbre,var);
    return m;
}

int nbVal(arbre* unArbre,int uneCle){
    noeud* m = rechercher(unArbre,uneCle);
    return getValeur(m);
}


void deforestationSauvage(noeud* n){
    n->FDroit=NULL;
    n->FGauche=NULL;

}


