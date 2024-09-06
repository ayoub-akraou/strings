// Challenge 1 : Affichage d'une Chaîne
// Écrivez un programme C qui lit une chaîne de caractères entrée par 
// l'utilisateur et l'affiche à l'écran.

#include <stdio.h>
#include <string.h>



int main() {
    char str[50];
    printf("Saisi un string:\n");
    scanf("%s", str);
    printf("resultat: %s", str);
    return 0;
}
