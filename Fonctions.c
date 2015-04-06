#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "Prototype.h"

 #define TAILLE 4
 #define SYMBOLE '*'

/*
 * @author CIULLI Axel
 * @coauthor ROUX Victor
 */

//Fonction Vérification des coordonnées
int verifCoord(Probleme* p, Coordonnees* c)
{
 return (c -> x>=0 && c -> x<p -> nbLignes && c -> y>=0 && c -> y<p -> nbCol) ? 1 : 0;
}

// Fonction vérification si Element Vide
int estVide(Element* e)
{
  if(e != NULL )
  {
      return 1;
  }
  return 0;
}

// Fonction Empiler
void empiler(Pile* pi, Element* e)
{
    if(estVide(e)==0)
    {
        if(!estVide(pi -> tete))
        {
            pi -> tete=e;
        }
    }
}

// Fonction Depiler
void depiler(Pile* pi)
{
    Element *svg;

    if(pi!=NULL && estVide(pi -> tete)==0 && estVide(pi -> tete -> suivant)==1)
    {
        svg=pi -> tete;
        pi -> tete=pi -> tete -> suivant;
        free(svg);
    }
}

// Fonction Emfiler
void enfiler(File* fi, Element* e)
{
    if(estVide(e)==0)
    {
        if(!estVide(fi -> tete))
        {
            fi -> tete=e;
            fi -> tete -> suivant=fi -> queue;
        }
    }
}

// Permet de marquer les chemins empruntés.
void ajouterEtoile(Probleme* pb, Coordonnees* coord)
{
    if(pb!=NULL && pb -> map!=NULL
       && pb -> map -> cell!=NULL
       && coord -> x>=0 &&coord -> x<pb -> nbLignes
       && coord -> y>=0 && coord -> y<pb -> nbCol)
    {
        pb -> map -> cell -> caract=SYMBOLE;
    }
}





