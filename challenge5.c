// Challenge 5 : Inversion de Chaîne
// Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne
// inversée. Par exemple, si la chaîne est "abcd",
// le programme doit afficher "dcba".

#include <stdio.h>
#include <string.h>

void inverser(char str[]) {
    int l = strlen(str);
    char str_inversé[l];
    for(int i = 0; i < l; i++) {
        str_inversé[l - 1 - i] = str[i];
    }
    printf("%s", str_inversé);
}

int main() {
    inverser("123");
    return 0;
}
