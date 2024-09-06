// Challenge 4 : Comparaison de Chaînes
// Écrivez un programme C qui lit deux chaînes de caractères et compare si elles
// sont égales ou non. Affichez un message indiquant si les chaînes sont 
// égales ou différentes.

#include <stdio.h>
#include <string.h>

int comparer(char str1[], char str2[]) {
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    
    if(l1 != l2) {
        return printf("les deux strings ne sont pas identique");
    }
    
    for(int i = 0; i < l1; i++) {
        if(str1[i] != str2[i]) return printf("les deux strings ne sont pas identique");
    }
    printf("les deux strings sont identique");
}

int main() {
    comparer("akram", "akram");
    return 0;
}
