// Challenge 10 : Trouver un Sous-String
// Écrivez un programme C qui lit une chaîne de caractères principale et une sous-chaîne, 
// puis vérifie si la sous-chaîne est présente dans la chaîne principale. 
// Affichez un message indiquant si la sous-chaîne est trouvée ou non.

#include <stdio.h>
#include <string.h>

void rechercher_une_sous_chaine(char chaine[], char sous_chaine[]) {
    int longueur_chaine = strlen(chaine);
    int longueur_sous_chaine = strlen(sous_chaine);
    int j = 0;
    int trouve = 0;
    
    for(int i = 0; i < longueur_chaine; i++) {
        // printf("=> chaine[i]: %c\n", chaine[i]);
        if(chaine[i] == sous_chaine[j] && j < longueur_sous_chaine) {
        // printf("===> chaine[j]: %c\n", sous_chaine[j]);
           j++;
           if(j == longueur_sous_chaine) {
                trouve = 1;
                break;
           }
        } else {
            j = 0;
        }
    }
        
    if(trouve) {
        printf("trouvé");
    } else {
        printf("non trouvé");
    }
}

int main()
{
    rechercher_une_sous_chaine("1200 470"," 47");
    return 0;
}
