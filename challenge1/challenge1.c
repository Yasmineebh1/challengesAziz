#include<stdio.h>

int main(){
    int longueur,largeur,aire,perimetre;

    printf("entrer la longueur: ");
    scanf("%d",&longueur);
    printf("entrer la largeur: ");
    scanf("%d",&largeur);

    aire = longueur * largeur;
    perimetre = 2 *(longueur + largeur);

    printf("Aire: %d\n", aire);
    printf("perimetre: %d", perimetre);
}