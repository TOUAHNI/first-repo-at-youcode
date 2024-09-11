#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char caractere;
    int i,longueur,countr=0;
    
    
    printf("entre chaine  ");
    fgets(chaine,100,stdin);
    printf("entre caractere recherch ");
    scanf("%c",&caractere),
    
    longueur=strlen(chaine);
    for(i=0;i<longueur;i++){
        if (chaine[i]==caractere){
            countr++;
        }
    }
    printf("%d",countr++);
    
    return 0;
}