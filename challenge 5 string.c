#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char inversee[100];
    int i,longueur;
    
    
    printf("entre chaine  ");
    fgets(chaine,100,stdin);
    
    longueur=strlen(chaine);
    for(i=0;i<longueur;i++){
        inversee[i]=chaine[longueur-1-i];
    }
    printf("%s",inversee);
    
    return 0;
}