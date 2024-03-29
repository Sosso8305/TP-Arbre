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




noeud* rechercherMemo(arbre* r, int v,noeud* memo){                          //ces diff�rentes fonction march�es mais je retourn� l'adresse d'un neoud copi�
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
    if(r==NULL){
        return NULL;
    }
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


void deforestation(noeud* n){
     if (n!=NULL){
        if (n->FGauche !=NULL){
            deforestation(n->FGauche);
            printf("deforestation: elimination du noeud %i fils gauche de %i \n",getCle(n->FGauche),getCle(n));
            free(n->FGauche);
        }

        if (n->FDroit !=NULL){
            deforestation(n->FDroit);
            printf("deforestation: elimination du noeud %i fils droite de %i \n",getCle(n->FDroit),getCle(n));
            free(n->FDroit);
        }

        n->FDroit=NULL;
        n->FGauche=NULL;

     }

}


int somme(arbre* r){
    if (r==NULL){
        return 0;
    }
    else if(r->FGauche==NULL){
        return getCle(r) + somme(r->FDroit);
    }
    else if(r->FDroit==NULL){
        return getCle(r) + somme(r->FGauche);
    }
    else{
        return getCle(r) + somme(r->FGauche) +somme(r->FDroit);
    }

}


void parcoursProfondeur(arbre* r){
    if (r!=NULL){
        printf("%i  ",getCle(r));
        if (r->FGauche!=NULL){
            parcoursProfondeur(r->FGauche);
        }
        if (r->FDroit!=NULL){
            parcoursProfondeur(r->FDroit);
        }

    }

}


void couperPetits(arbre* r,int seuil){          //Q36 fait � moiti�
    if (r!=NULL){                               //Q37 TODO (optionnel)
        if(r->FGauche!=NULL){
            if (getCle(r->FGauche)<seuil){
                noeud* tmp = r->FGauche;
                r->FGauche=r->FGauche->FDroit;
                tmp->FDroit=NULL;
                deforestation(tmp);
                couperPetits(r,seuil);
            }
            else{
                couperPetits(r->FGauche,seuil);
            }

        }

    }
}



int maxV(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}



int initHauteur(arbre* r){

    if (r!=NULL){

        if ((r->FGauche == NULL) && (r->FDroit == NULL)){
            r->valeur = 0;
        }
        else{
            r->valeur= maxV(initHauteur(r->FGauche),initHauteur(r->FDroit))+1;
        }

        return getValeur(r);
    }
    return -1;
}


int difference(arbre* r){
    if (r!=NULL){
        if ((r->FGauche == NULL) && (r->FDroit == NULL)){
                return 0;
        }
        else if ((r->FGauche != NULL) && (r->FDroit == NULL)){
            return getValeur(r->FGauche)+1;
        }
        else if ((r->FGauche == NULL) && (r->FDroit != NULL)){
            return -1-getValeur(r->FDroit);

        }
        else if ((r->FGauche != NULL) && (r->FDroit != NULL)){
            return getValeur(r->FGauche) - getValeur(r->FDroit);
        }
    }
    return -1;
}


int estAVL(arbre* r){
    if (-1>getValeur(r) || getValeur(r)>1){
        return 0;
    }

    if(r->FGauche!=NULL){
            estAVL(r->FGauche);
        }
    if(r->FDroit!=NULL){
            estAVL(r->FDroit);
        }
    return 1;


}

