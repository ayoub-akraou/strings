// Challenge 3 : Concaténation de Chaînes
// Écrivez un programme C qui lit deux chaînes de caractères et les concatène en 
// une seule chaîne. Affichez la chaîne résultante.

#include <stdio.h>
#include <string.h>

int concatener(char str1[], char str2[]) {
    int longueur1 = strlen(str1);
    int longueur2 = strlen(str2);
    int longueur3 = longueur1 + longueur2;
    char str3[longueur3];
    
    for(int i = 0; i < longueur3; i++) {
        if(i < longueur1) {
            str3[i] = str1[i];
        }
        else {
            str3[i] = str2[i - longueur1];
        }
    }
    str3[longueur3] = '\n';
    printf("%s", str3);
}

int main() {
    concatener("akram", "bolde");
    return 0;
}
