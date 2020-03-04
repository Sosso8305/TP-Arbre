#ifndef ARBRE_H_INCLUDED
#define ARBRE_H_INCLUDED

typedef int TValue;

typedef struct noeud noeud;

typedef struct noeud arbre;

typedef struct noeud{
    int cle;
    TValue valeur;
    noeud* FGauche;
    noeud* FDroit;

}noeud;


/** \brief creer noeud
 *
 * \param cle int
 * \return noeud*
 *
 */
noeud* creerNoeud(int cle);


/** \brief fait le lien entre le pere et les fils
 *
 * \param dad noeud*
 * \param son noeud*
 * \return void
 *
 */
void accroche(noeud* dad, noeud* son);

/** \brief Mettre une feuille au bonne endroit dansl'arbre
 *
 * \param r arbre*
 * \param n noeud*
 * \return void
 *
 */
void insererDansArbre(arbre* r,noeud* n);

/** \brief transforme un tab en arbre
 *
 * \param r arbre*
 * \param tab int*
 * \param taille int
 * \return void
 *
 */
void insererTableau(arbre* r, int* tab,int taille);


/** \brief Aficchage avec trait
 *
 * \param r arbre*
 * \param decalage int
 * \return void
 *
 */
void afficher(arbre* r,int decalage);


int getCle(arbre* r);
int getValeur(arbre* r);

void afficherFonction(arbre* r,int decalage, int (*mafct)(arbre* r));



/////////////////////FONCTION OVER////////////////////////////
/*
 \brief Permet de copier un noeud

  \param Origin noeud*
  \param Cop noeud*
  \return void


void copyNoeud(noeud* Origin ,noeud* Cop);

 \brief Fonction rechercher() avec un parametre memo pour faire passer la cle rechercher à travers les différente appel de la fonction

 \param r arbre*
 \param v int
  \param memo noeud*
  \return noeud*


noeud* rechercherMemo(arbre* r,int v,noeud* memo);

*/

/////////////////////////FIN FONCTION OVER////////////////////////////

/** \brief recherche l'entier v dans l'arbre r et renvoie son adresse
 *
 * \param r arbre*
 * \param v int
 * \return int*
 *
 */
noeud* rechercher(arbre* r,int v);



/** \brief fait un appel a la fct recherche mais un parametre de v comme étant la dernier valeud de mon nom, I
 *
 * \param UnArbre arbre*
 * \return noeud*
 *
 */
noeud* rechercherDerniereLettre(arbre* UnArbre);


int nbVal(arbre* unArbre,int uneCle);

/** \brief coupe le lien des fils avec le noeud n
 *
 * \param n noeud*
 * \return void
 *
 */
void deforestationSauvage(noeud* n);



/** \brief coupe le lien des fils avec le noeud n et libere leur espace mémoire
 *
 * \param n noeud*
 * \return void
 *
 */
void deforestation (noeud* n);

/** \brief fait la somme des cle d'un arbre
 *
 * \param r arbre*
 * \return int
 *
 */
int somme(arbre* r);


/** \brief parcours en mode profondeur de l'arbre
 *
 * \param r arbre*
 * \return void
 *
 */
void parcoursProfondeur(arbre* r);


/** \brief coupe tout les noeud ou la cle est inferieur au seuil
 *
 * \param a arbre*
 * \param seuil int
 * \return void
 *
 */
void couperPetits(arbre* a, int seuil);

int maxV(int a,int b);
int initHauteur(arbre * a);
int difference(arbre* a);
int estAVL(arbre* r);


#endif // ARBRE_H_INCLUDED
