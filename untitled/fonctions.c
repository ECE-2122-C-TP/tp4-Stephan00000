//
// Created by steph on 29/09/2021.
//
#include <stdio.h>

// Fonctins Exercice 1 :

//Fonction "getMax" donne le maximum entre deux nombres entiers
//IN : deux nombres entiers
//OUT : Le plus grand des deux

    int getMax(int entier1, int entier2) {
        if (entier1 >= entier2 ) {
            return entier1;
        }
        else {
            return entier2;
        }
}
//Fonction exercice 2 :

//Fonction "saissirEntier" permet de saisir un entier
// IN : un entier
// OUT : le meme entier est retourné

    int saisirEntier () {
    int entier = 0;
    printf("Pour continuer, veuillez saisir un entier \n");
    scanf("%i", &entier);
    return entier;
}

//Fonctions exercice 3 :

//Fonction "calculaire" donne l'aire d'un rectangle
//IN : Longueur et largeur
//Out : aire du rectangle
    int calculAire (int longueur, int largeur) {
    int aire = 0;
    aire = longueur*largeur;
    return aire;
}

//Fonction "calculPerimetre" donne le perimetre d'un rectangle
//IN : Longueur et largeur
//Out : Perimetre du rectangle
    int calculPerimetre (int longueur, int largeur) {
    int perimetre = 0;
    perimetre = (longueur * 2 + largeur * 2);
    return perimetre;
}

//Fonctions Exercice 4 :

//Fonction "testMultple" prend deux entiers et dis si le premier est un multiple du deuxieme
//IN : prend un nombre supposé multiple et un aure supposé diviseur
//OUT : Renvoie vrai (1) si le premier est un multiple du deuxieme ou faux (0) sinon
    int testMultiple ( int multiple, int diviseur) {
    if ( (multiple % diviseur) == 0 ) {
        return 1;
    }
    else {
        return 0;
    }
}

//     Fonction Exercice 5 :

// fonction "saisirFloat" fait la meme chose que "saisirEntier" mais avec des float ( voir "saisirEntier" )
    float saisirFloat () {
    float nombre = 0;
    printf("Pour continuer, veuillez saisir un nombre \n");
    scanf("%f", &nombre);
    return nombre;
}

//Fonction "calculMoyenne" calcule la moyenne de trois notes entre 0 et 20
//IN : trois entiers supposés entre 0 et 20
//OUT : La moyenne de ces trois entiers ou invalide (-1) si les notes sont invalides
    float calculMoyenne () {
    float note = 0;
    float sommeNote  = 0;
    float moyenne = 0;
    int correct = 1;
    printf("Exercice 5 : \n saississez trois notes pour en connaitre la moyenne \n");
    for (int i = 0; i < 3; ++i) {
        note = saisirFloat();
        if ( note >= 0 && note <= 20) {
            sommeNote += note;
        }
        else {
            correct = 0;

        }

    }
    if (correct) {
        moyenne = sommeNote/3.0f;
        return moyenne;
    }
    else {
        return -1;
    }

}

// Exercice 5+ (exos suivants TD3) :

// Fonction calculEtage donne un nombre d'etage pour un nombre de pierre donné :
//IN : nombre de pierre
//OUT : Nombre d'étage
    int calculEtage (int nbPierre) {
    int nombrePierre = 0;
    int nombreEtage = 0;
    int carre = 0;
    while (nbPierre > nombrePierre) {
    nombreEtage += 1;
    carre = nombreEtage*nombreEtage;
    nombrePierre += carre;
    }
    return (nombreEtage-1);
    }

