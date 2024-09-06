// Challenge 6 : Compte des Occurrences d'un Caractère
// Écrivez un programme C qui lit une chaîne de caractères et un caractère,
// puis compte et affiche combien de fois le caractère apparaît dans la chaîne.

#include <stdio.h>
#include <string.h>



int main() {
    printf("saisi le string: \n");
    char str[50];
    scanf("%s", str);
    int l = strlen(str);
    printf("saisi le charactere:\n");
    char charactere;
    getchar();
    charactere = getchar();
    
    
    int counter = 0;
    for(int i = 0; i < l; i++) {
        if(str[i] == charactere) {
            counter++;
        }
    }
    printf("%i", counter);
    return 0;
}
