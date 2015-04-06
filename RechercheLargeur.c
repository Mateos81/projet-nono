#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "Prototype.h"

 #define TAILLE 4

/*
 * @author MATEOS Christophe
 * @coauthor ROUX Victor
 */


/**
 * Recherche du chemin d'une map en connaissant le départ et l'arrivée.
 * @param pb Structure Probleme contenant la map, le point de départ et le point d'arrivée.
 * @return Un pointeur sur le premier élément de la liste chaînée contenant le chemin.
 */

File* rechercheCheminLargeur(Probleme pb)
{
    // File des éléments parcourus dans la map
    File *fileCoord;

    // Liste des chemins des éléments de fileCoord
    File **chemins;

    Coordonnees fils[TAILLE];

    int nbFils = 0, i, diffNbFilsChemin = 0;

    if (verifCoord(pb.map, pb.depart))
    {
        enfiler(fileCoord, pb.depart);
        enfiler(chemins[0], pb.depart);
        ajouterEtoile(pb.map, pb.depart);

        while (!verifArrivee(fileCoord, pb.arrivee) || !estVide(fileCoord))
        {
            if ((fils = getFils(pb.map, fileCoord.tete.suivant)) == NULL)
            {
                nbFils = getNbFils(pb.map, fileCoord.tete.suivant);

                for (i = 0; i < nbFils; i++)
                {
                    enfiler(fileCoord, fils[i]);
                }

                for (i = 0; i < nbFils; i++)
                {
                    enfiler(chemins[longeurChemin() - 1], pile);
                }
            }
        }
    }
}
