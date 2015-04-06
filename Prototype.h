#ifndef PROTOTYPE_H_INCLUDED
#define PROTOTYPE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/*
 * @author CIULLI Axel
 * @coauthor ROUX Victor
 */

/*Declarartion des prototypes des fonctions*/

// Fonction V�rification des coordonn�es
int verifcoord(Probleme*, Coordonnees*);

// Fonction v�rification si Element Vide
int estVide(Element* );

// Fonction  de pile
void empiler(Pile*, Element*);
void depiler(Pile*);

// Fonction  de file
void enfiler(File*, Element*);
void defiler(File*);

// Fonction Recherche chemin largeur
File* rechercheCheminLargeur(Probleme* );

// Permet de marquer les chemins emprunt�s.
void ajouterEtoile(Probleme*, Coordonnees*);

//v�ricfication Arrivee
void verifArrivee (File*,Coordonnees*); //� faire

//fonction fils
getFils(Map*, Element*);//� faire
getNbFils(Map*,Element*);//� faire

#endif // PROTOTYPE_H_INCLUDED
