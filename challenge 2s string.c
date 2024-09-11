#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{   char chane[50];
    int longueur=1;
     
     printf("entre une chaîne de caractères ");
     scanf("%s",chane);
     
     while(longueur<100){
         if(chane[longueur]=='\0'){
             break;
         }longueur++;
     }
     printf("%d",longueur);


    return 0;
}