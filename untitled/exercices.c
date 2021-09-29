//
// Created by steph on 29/09/2021.
//
#include <stdio.h>
#include "fonctions.h"
#define  dix 10

// Exercice 1 : utilise getMax pour donner le maximum entre 2 entiers
void exercice1 () {
    int entier1 = 0;
    int entier2 = 0;
    int max = 0;
    printf("Exercice 1 : \n Choississez deux entiers, je vous retourne le plus grand \n");
    scanf("%i", &entier1);
    scanf("%i", &entier2);
    max = getMax(entier1, entier2);
    printf("le nombre le plus grand est %i \n \n \n", max);
}


//  Exercice 2 : pour la forme, utilise saisirEntier pour retourner un nombre


void exercice2 () {
    printf("Exercice 2 : \n");
    int correcte = 0;
    int entier = 0;
    while (correcte == 0) {
        entier = saisirEntier();
        printf("Vous avez bien saisi l'entier %i ? Tapez 1 pour confirmer ou 0 pour Non \n", entier);
        scanf("%i", &correcte);
    }
    printf("Votre nombre est %i . Oui je sais, je suis tres fort pour deviner les nombres...\n \n \n", entier);
}

//  Exercice 3 : donne l'aire et le perimetre d'un rectangle
void exercice3 () {
    int longueur = 0;
    int largeur = 0;
    int aire = 0;
    int perimetre = 0;
    printf("Execercice 3 : \n Voici un joli rectangle ! Calculons son aire et son perimetre : \n");
    printf("D'abbord saississez sa longueur : \n");
    longueur = saisirEntier();
    printf("Maintenant saississez sa largeur : \n");
    largeur = saisirEntier();
    aire = calculAire( longueur, largeur);
    perimetre = calculPerimetre(longueur, largeur);
    printf("L'aire de votre rectangle est %i et le Perimetre de votre rectangle est %i \n \n \n", aire, perimetre);

}
// Exercice 4 : dis si un nombre est multiple de 3 et si il est superieur ou non à 10
void exercice4 () {
    int entier = 0;
    printf(" Exercice 4 : \n Entrez un nombre, vous saurez si il est multiple de trois et si il est plus grand que dix \n");
    entier = saisirEntier();
    if (testMultiple( entier, 3) ) {
        printf("Le nombre %i est un multiple de 3\n", entier);
    }
    else {
        printf("Le nombre %i n'est pas un multiple de 3 \n", entier);
    }
    if (entier > dix ) {
        printf("Le nombre %i est plus grand que 10 \n", entier);
    }
    else {
        printf("Le nombre %i n'est pas plus grand que 10 \n \n \n", entier);
    }
}

//    Exercice 5 : donne la moyenne de trois notes entre 0 et 20
void exercice5 () {
    int correct = 0;
    float moyenne = 0.0f;
    while (!correct) {
        moyenne = calculMoyenne();
        if (moyenne == -1) {
            printf("Desolez vos notes sont invalides, veuillez recomencer \n");
        }
        else {
            printf("La  moyenne est de %f \n \n \n",moyenne);
            correct = 1;
        }
    }
}

// Exercice 5+ :

// Exercice 7 TD3 : compte le nombre d'élève dans une école avec le nombre de classes et d'élèves dans chaque classe
void exo7 () {
    printf("Exercice 7 TD3\n");
    int nombreClasse = 0;
    int totalEleve = 0;
    int nombreEleve = 0;
    printf("comptons le nombre d'eleves : \n Combiens de Classes y a t'il ?\n"); // on recupere le nombre de classe
    nombreClasse = saisirEntier();
    for (int i = 1; i <= nombreClasse; ++i) {
        printf("combiens y a t'il d'eleve dans la classe %i ? \n", i); // on recupere le nombre d'eleve par classe
        nombreEleve = saisirEntier();
        totalEleve += nombreEleve;    // on additione a chaque fois pour avoir la nombre total
    }
    printf("Il y a %i eleves dans votre Ecole \n \n \n", totalEleve);  //on retourne le total
}

//       Exercice 8 du TD3 : dit si un nombre est multiple de 7 ou de 2
void exo8 () {
    printf("Exercice 8\n");
int nombre = 0;
printf("Saississez un nombre, vous saurez si il est multiple de 7 ou 2\n");
    nombre = saisirEntier();                               //utilisation de la fonction "saisirEntier"
    if (testMultiple(nombre,7) && testMultiple(nombre,2)) { // utilisation de "testMultiple"
        printf("Votre nombre est un multiple de 7 et de 2");
    }
    else if (testMultiple(nombre,7)) {
                                                       printf("Votre nombre est un multiple de 7\n");
    }
    else if (testMultiple(nombre,2)) {
                                                       printf("Votre nombre est un multiple de 2\n");
    }
    else {
        printf("Votre nombre n'est ni multiple de 7, ni mulptiple de 2, veuillez ressaisir un nobre\n");
                                                   }
}

//       Exercice 9 TD3 :
void exo9 () {
    printf("Exercice 9\n");
    int nbPierre = 0;
    int nbEtage = 0;
    printf("Saississez le nombre de pierres : \n");
    nbPierre = saisirEntier();
    nbEtage = calculEtage(nbPierre);
    printf("Le nombre d'etage est de %i", nbEtage);
}


// Exo 10 TD3 :
int exo10 () {
    printf("Exercice 10\n");
    int nbEntier = 0;
    int sommeEntier = 0;
    int entier = 0;
    float moyenne = 0.0f;
    printf("Saississez plusieurs nombres entier positifs pour calculer leur moyenne, \n pour arreter la saisie entrer un nombre negatif \n");
    while (entier >= 0) {
        entier = saisirEntier;
        if (entier >= 0) {
            sommeEntier += entier;
            nbEntier += 1;
        }
    }
    moyenne = (float) sommeEntier / (float) nbEntier;
    printf("La moyenne de tout ces nombres entiers est %f", moyenne);
}