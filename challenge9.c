// Challenge 9 : Suppression des Espaces
// Écrivez un programme C qui lit une chaîne de caractères et supprime tous les espaces. 
// Affichez la chaîne résultante.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Saisir une chaine de caractere: \n");
    scanf("%[^\n]s", str);
    int l = strlen(str);
    char resultat[100];
    int j = 0;
    for(int i = 0; i < l; i++) {
        if(str[i] != ' ') {
            resultat[j] = str[i];
            j++;
        }
    }
    printf("resultat: %s", resultat);
    return 0;
}
