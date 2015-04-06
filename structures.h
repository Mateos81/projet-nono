#include <stdio.h>
#include <stdlib.h>

/*
 * @author MATEOS Christophe
 * @coauthor ROUX Victor
 * @coauthor Ciulli Axel
 */

 typedef struct coordonnees
{
    int x;
    int y;
} Coordonnees;

typedef struct cellule
{
    Coordonnees Coord;
    char caract;
}Cellule;
typedef struct map
{
    Cellule* cell;
} Map;


typedef struct probleme
{
    Map* map;
    Coordonnees depart;
    Coordonnees arrivee;
    int nbLignes;
    int nbCol;
} Probleme;

typedef struct element
{
    Coordonnees coord;
    struct element *precedent; // Peut ne pas servir
    struct element *suivant;
} Element;

typedef struct file
{
    Element *tete;
    Element *queue;
    int nbElements;
} File;

typedef struct pile
{
    Element *tete;
    int nbElements;
} Pile;



