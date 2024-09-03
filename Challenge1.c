#include <stdio.h>

int main() {
  char nom[10],prenom[10],mail[20],sexe[1];
  int age;
     
     printf("entre le nom ");
     scanf("%s",&nom);
     printf("entre le prenom ");
     scanf("%s",&prenom);
     printf("entre le sexe m/f ");
     scanf("%s",&sexe);
     printf("entre le age ");
     scanf("%d",&age);
     printf("entre le mail ");
     scanf("%s",&mail);
     printf("nom %s\nprenom %s\nsexe %s\nage %d\nmail %s",nom,prenom,sexe,age,mail);
     
  
    return 0;
}