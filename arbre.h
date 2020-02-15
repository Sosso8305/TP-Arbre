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

#endif // ARBRE_H_INCLUDED
