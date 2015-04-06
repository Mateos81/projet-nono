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
 * Recherche du chemin d'une map en connaissant le d�part et l'arriv�e.
 * @param pb Structure Probleme contenant la map, le point de d�part et le point d'arriv�e.
 * @return Un pointeur sur le premier �l�ment de la liste cha�n�e contenant le chemin.
 */

File* rechercheCheminLargeur(Probleme pb)
{
    // File des �l�ments parcourus dans la map
    File *fileCoord;

    // Liste des chemins des �l�ments de fileCoord
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
