#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100];
    char chaine2[100];
    char resulta[200];
    
    
    
    printf("entre chaine n:1 ");
    fgets(chaine1,100,stdin);
    printf("entre chaine n:1 ");
    fgets(chaine2,100,stdin);
    
    strcpy(resulta,chaine1);
    strcat(resulta,chaine2);
    printf("%s",resulta);
    
    
    
    return 0;
}