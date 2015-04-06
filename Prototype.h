#ifndef PROTOTYPE_H_INCLUDED
#define PROTOTYPE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/*
 * @author CIULLI Axel
 * @coauthor ROUX Victor
 */

/*Declarartion des prototypes des fonctions*/

// Fonction Vérification des coordonnées
int verifcoord(Probleme*, Coordonnees*);

// Fonction vérification si Element Vide
int estVide(Element* );

// Fonction  de pile
void empiler(Pile*, Element*);
void depiler(Pile*);

// Fonction  de file
void enfiler(File*, Element*);
void defiler(File*);

// Fonction Recherche chemin largeur
File* rechercheCheminLargeur(Probleme* );

// Permet de marquer les chemins empruntés.
void ajouterEtoile(Probleme*, Coordonnees*);

//véricfication Arrivee
void verifArrivee (File*,Coordonnees*); //à faire

//fonction fils
getFils(Map*, Element*);//à faire
getNbFils(Map*,Element*);//à faire

#endif // PROTOTYPE_H_INCLUDED
