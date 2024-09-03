#include <stdio.h>

int main() {
  
  float c;
     
     printf("entre la température en Celsius ");
     scanf("%f",&c);

    if(c<0){
    printf("l'état de l'eau à cette température et Solide ");   
    }
    else if (0<=c && c< 100){
    printf("l'état de l'eau à cette température et Liquide ");   
    }
     else {
    printf("l'état de l'eau à cette température et Gaz ");   
    }
  
    return 0;
}