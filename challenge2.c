// Challenge 2 : Longueur de la Chaîne
// Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen().


#include <stdio.h>

int obtenir_longueur(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    printf("%i", i);
}

int main() {
    char str[] = "a";
    obtenir_longueur("ayoub");
    // resultat: 5
    return 0;
}
