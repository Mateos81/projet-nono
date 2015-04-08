#include <stdio.h>
#include "structures.h"
/**
*@author Colin Pérémarty
*/


void trouverFils(File fileFils*, coordonnees position);
int validerCase(coordonnees position);
void trouverFils(*Map, fileFils*, position);

/*
Entrée Probleme pr

Début profondeur
    fileFils //(file de fils, les entrées les moins récentes sont prisent en premier
    position <- pr.depart //(position)
    arrivee <- pr.arrivee //(position)
    i <- 0 ;      // entier incrément

    Tant que (position =! arrivee)
        fileFils <- tabFils + trouveFils(position)

        Tant que fils[i] != arrivee //Parcourir tous les fils

            fileFils <- tabFils + fils[i](position)
            i++;
            supprimer fils[i]

        Fin Pour

    Fin Tant que
Fin

*/
/**
 *
 */
/** \brief
 *
 * \param argc int
 * \param argv[] char*
 * \return int
 *
 */
int profondeur(probleme pr)
{
    printf("Projet nono :\n");

//    fileFils //(file de fils, les entrées les moins récentes sont prisent en premier
//    PileChemin //(pile de coordonées du chemin, les entrées les plus récentes sont prisent en premier
    File fileFils;
    Pile PileChemin;

//    position <- pr.depart //(position)
//    arrivee <- pr.arrivee //(position)
    position = pr.depart //(position)
    arrivee = pr.arrivee //(position)

//    i <- 0 ;      // entier incrément
    int i = 0 ;
//
//    Tant que (position =! arrivee)
    while(estArrive(arrivee, position)){
//        fileFils <- tabFils + trouveFils(position)
        trouverFils(*Map, fileFils*, position);
//        Tant que fils[i] != arrivee //Parcourir tous les fils
        while(verifArrivee(File*,Coordonnees*)){
//            fileFils <- tabFils + fils[i](position)
//            supprimer fils[i]
//            fils suivant;
            trouverFils(*Map, fileFils, position);
            supprimer(fils[i]);
            i++;
        }
//
    }


    return 0;
}


/** \brief Remplis la file de fils en parametre, avec de nouveaux fils
 *
 * \param fileFils* File
 * \param position coordonnees
 * \return void
 *
 */
 /*
    //Teste les cases autour de la case

    //(x+1;y)
    position.x++
    Si validerCase(position) = 0
        enfiler(*fileFils, *position)
    Fin Si

    //(x-1;y)
    position.x--
    position.x--
    Si validerCase(position) = 0
        enfiler(*fileFils, *position)
    Fin Si

    //(x;y+1)
    position.x++
    position.y++
    Si validerCase(position) = 0
        enfiler(*fileFils, *position)
    Fin Si

    //(x;y-1)
    position.y--
    position.y--
    Si validerCase(position) = 0
        enfiler(*fileFils, *position)
    Fin Si

    Fin Faire tant que
*/
void trouverFils(*Map, File fileFils*, coordonnees position){

}


/** \brief Valide la case et retourne ce qu'elle est
 *
 * \param position coordonnees
 * \return int : 0 pour valide
                 1 pour une case étoilé
                 2 pour un mur
                 3 pour une case présente dans la file de fils
                 4 pour une erreur ou une sortie de labyrinte
 *
 */
 /*
    Selon position :
        cas ' ':
            ret = 0
            Fin cas
        cas '*':
            ret = 1
        Fin cas
        cas '|':
        cas '-':
        cas '+':
            ret = 2
            Fin cas
        par défaut:
            ret = 4;
            Fin cas
    Fin Selon cas
    retourne ret;

*/
int validerCase(coordonnees position){


}
