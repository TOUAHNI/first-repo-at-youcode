#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100];
    char chaine2[100];
    
    
    
    printf("entre chaine n:1 ");
    fgets(chaine1,100,stdin);
    printf("entre chaine n:1 ");
    fgets(chaine2,100,stdin);
    
    if(strcmp(chaine1,chaine2)==0){
        printf("%s%set egale ",chaine1,chaine2);
    }else 
        printf("%s%set not egale ",chaine1,chaine2);
    
    
    return 0;
}