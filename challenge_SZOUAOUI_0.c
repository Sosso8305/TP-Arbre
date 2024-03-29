#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "arbre.h"

int evaluate(arbre * r) {
   if(r==NULL)
      return 0;
   int vg,vd;
   if (r->FGauche==NULL) vg = 0; else vg = r->FGauche->cle;
   if (r->FDroit ==NULL) vd = 0; else vd = r->FDroit->cle;
   return (r->cle + vg + vd)/3;
}

void challenge_1 (){

   arbre * noeud0 = NULL;
   printf("=> Calling accroche\n");
   noeud0 = creerNoeud(116);
   noeud * noeud1 = creerNoeud(106);
   accroche(noeud0, noeud1);
   noeud * noeud2 = creerNoeud(90);
   accroche(noeud1, noeud2);
   noeud * noeud3 = creerNoeud(84);
   accroche(noeud2, noeud3);
   noeud * noeud4 = creerNoeud(185);
   accroche(noeud0, noeud4);
   noeud * noeud5 = creerNoeud(140);
   accroche(noeud4, noeud5);
   noeud * noeud6 = creerNoeud(161);
   accroche(noeud5, noeud6);
   noeud * noeud7 = creerNoeud(110);
   accroche(noeud1, noeud7);
   noeud * noeud8 = creerNoeud(73);
   accroche(noeud3, noeud8);
   noeud * noeud9 = creerNoeud(111);
   accroche(noeud7, noeud9);
   noeud * noeud10 = creerNoeud(100);
   accroche(noeud2, noeud10);
   noeud * noeud11 = creerNoeud(99);
   accroche(noeud10, noeud11);
   noeud * noeud12 = creerNoeud(5);
   accroche(noeud8, noeud12);
   noeud * noeud13 = creerNoeud(165);
   accroche(noeud6, noeud13);
   noeud * noeud14 = creerNoeud(191);
   accroche(noeud4, noeud14);
   noeud * noeud15 = creerNoeud(145);
   accroche(noeud6, noeud15);
   noeud * noeud16 = creerNoeud(113);
   accroche(noeud9, noeud16);
}

void challenge_2 (){

   arbre * noeud0 = NULL;
   printf("=> Calling insererDansArbre\n");
   noeud0 = creerNoeud(116);
   noeud * noeud1 = creerNoeud(106);
   insererDansArbre(noeud0, noeud1);
   noeud * noeud2 = creerNoeud(90);
   insererDansArbre(noeud0, noeud2);
   noeud * noeud3 = creerNoeud(84);
   insererDansArbre(noeud0, noeud3);
   noeud * noeud4 = creerNoeud(185);
   insererDansArbre(noeud0, noeud4);
   noeud * noeud5 = creerNoeud(140);
   insererDansArbre(noeud0, noeud5);
   noeud * noeud6 = creerNoeud(161);
   insererDansArbre(noeud0, noeud6);
   noeud * noeud7 = creerNoeud(110);
   insererDansArbre(noeud0, noeud7);
   noeud * noeud8 = creerNoeud(73);
   insererDansArbre(noeud0, noeud8);
   noeud * noeud9 = creerNoeud(111);
   insererDansArbre(noeud0, noeud9);
   noeud * noeud10 = creerNoeud(100);
   insererDansArbre(noeud0, noeud10);
   noeud * noeud11 = creerNoeud(99);
   insererDansArbre(noeud0, noeud11);
   noeud * noeud12 = creerNoeud(5);
   insererDansArbre(noeud0, noeud12);
   noeud * noeud13 = creerNoeud(165);
   insererDansArbre(noeud0, noeud13);
   noeud * noeud14 = creerNoeud(191);
   insererDansArbre(noeud0, noeud14);
   noeud * noeud15 = creerNoeud(145);
   insererDansArbre(noeud0, noeud15);
   noeud * noeud16 = creerNoeud(113);
   insererDansArbre(noeud0, noeud16);
}

void challenge_3 (){

   arbre * noeud0 = NULL;
   printf("=> Calling insererTableau\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
}

void challenge_4 (){

   arbre * noeud0 = NULL;
   printf("=> Calling afficher\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficher(noeud0, 0);
}

void challenge_5 (){

   arbre * noeud0 = NULL;
   printf("=> Calling afficherFonction\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficherFonction(noeud0, 0, evaluate);
}

void challenge_6 (){

   arbre * noeud0 = NULL;
   printf("=> Calling rechercherDerniereLettre and comparing the value\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   noeud * n5 = rechercherDerniereLettre(noeud0);
   printf("Node found for your final letter: %i (%c) =? 73 (I) \n", n5->cle, n5->cle);
}

void challenge_7 (){

   arbre * noeud0 = NULL;
   printf("=> Calling afficherFonction and nbVal\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficherFonction(noeud0, 0, getValeur);
   int nbv = nbVal(noeud0, 'I');
   printf("\nYour final letter  (73) has been inserted %i times\n", nbv);
 }

void challenge_8 (){

   arbre * noeud0 = NULL;
  printf("=> Calling deforestationSauvage for your final letter\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficher(noeud0, 0);
   noeud * n5 = rechercherDerniereLettre(noeud0);
   deforestationSauvage(n5);
   printf("\n============ SAVAGE CUT of 73 ============\n");
   afficher(noeud0, 0);
}

void challenge_9 (){

   arbre * noeud0 = NULL;
   printf("=> Calling deforestation for your final letter\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficher(noeud0, 0);
   noeud * n5 = rechercherDerniereLettre(noeud0);
   printf("\nSearching your final letter: %i\n", n5->cle);
   noeud * n5g = n5->FGauche;
   noeud * n5d = n5->FDroit;
   int hasleft = (n5g!=NULL);
   int oldl;
   if (hasleft){
      oldl = n5g->cle;
     printf("Left child: %i\n", oldl);
   }
   printf("Cutting properly !\n");
   deforestation(n5);
   printf("Resulting tree\n");
   afficher(noeud0,0);
   printf("\n");
   if (hasleft) {
     printf("Left child (should not be %i): %i\n", oldl, n5g->cle);
   }
   else {
      printf("Not lucky, the left child is NULL.\n"); }
}

void challenge_10 (){

   arbre * noeud0 = NULL;
   printf("=> Calling parcoursProfondeur\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficher(noeud0, 0);
   printf("\nDepth-first traversal: \n");   parcoursProfondeur(noeud0);
   printf("\nSum: %i (should be %i) \n", somme(noeud0), 1994);
}

void challenge_11 (){

   arbre * noeud0 = NULL;
   printf("=> Testing  couperPetits\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficher(noeud0, 0);
   printf("\nChoosen value for LittleCut: %i\n", 89 );
   couperPetits(noeud0, 89);
   afficher(noeud0, 0);
}

void challenge_12 (){

   arbre * noeud0 = NULL;
   printf("=> Computing the height and the initial balance of trees\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficher(noeud0, 0);
   printf("\n");
   initHauteur(noeud0);
   printf("height\n");
   afficherFonction(noeud0, 0,getValeur);
   printf("\n");
   printf("balance\n");
   afficherFonction(noeud0, 0, difference);
   printf("\n");
   if (estAVL(noeud0)){
      printf("Chanceux, c'est un AVL\n");
   }
   else {
      printf("Ce n'est pas un AVL\n");
   }
}
/*
void challenge_13 (){

   arbre * noeud0 = NULL;
   printf("=> Rotation from the node of your initial letter\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficher(noeud0, 0);
   printf("\n");
   initHauteur(noeud0);
   afficherFonction(noeud0, 0, difference);
   printf("\n");
   arbre ** pn = &(noeud0->FDroit);
   int d = difference(*pn);
   if ( abs(d) <2){
      printf("Sommet %i equilibre, on le desequilibre\n", (*pn)->cle);
      if ( (*pn)->FGauche != NULL){
         printf("Rotation Droite de %i\n", (*pn)->cle);
         rotationDroite(pn);
      } else if ( (*pn)->FDroit != NULL){
         printf("Rotation Gauche de %i\n", (*pn)->cle);
         rotationGauche(pn);
      } else {
         printf("Pas de chance, le fils droit de l'arbre initial est une feuille!\n");
      }
    }
    else{
      printf("On essaie de le reequilibrer\n");
      if(d>0){
        printf("Rotation Droite de %i\n", (*pn)->cle);
        rotationDroite(pn);
      }
      else {
        printf("Rotation Gauche de %i\n", (*pn)->cle);
        rotationGauche(pn);
      }
    }
   printf("Resultat\n");
   afficher(noeud0, 0);
   printf("\n");
   initHauteur(noeud0);
   printf("Desequilibre\n");
   afficherFonction(noeud0, 0, difference);
   printf("\n");
}

void challenge_14 (){

   arbre * noeud0 = NULL;
   printf("=> Balance ABR into AVL\n");
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableau(noeud0, tableau, 16);
   afficher(noeud0, 0);
   printf("\n");
   initHauteur(noeud0);
   afficherFonction(noeud0, 0, difference);
   printf("\n");
   tranformerVersAVL(&noeud0);
   printf("After Balancing\n");
   afficher(noeud0, 0);
   printf("\n");
   afficherFonction(noeud0, 0, difference);
   printf("\n");
}

void challenge_15 (){

   arbre * noeud0 = NULL;
   noeud0 = creerNoeud(116);
   int * tableau = calloc( 16, sizeof(int));
   tableau[0] = 106;
   tableau[1] = 90;
   tableau[2] = 84;
   tableau[3] = 185;
   tableau[4] = 140;
   tableau[5] = 161;
   tableau[6] = 110;
   tableau[7] = 73;
   tableau[8] = 111;
   tableau[9] = 100;
   tableau[10] = 99;
   tableau[11] = 5;
   tableau[12] = 165;
   tableau[13] = 191;
   tableau[14] = 145;
   tableau[15] = 113;
   insererTableauAVL(&noeud0, tableau, 16);
   printf("After Inserting\n");
   afficher(noeud0, 0);
   printf("\n");
   afficherFonction(noeud0, 0, difference);
   printf("\n");
   printf("CONGRATULATIONS! YOU HAVE REACHED THE END!!\n");
}

*/
