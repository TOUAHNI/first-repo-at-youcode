#include <stdio.h>

int main() {
  
  float a,b,c;
  float som,moyenne;
     printf("entre nombre a  ");
     scanf("%f",&a);
     printf("entre nombre b  ");
     scanf("%f",&b);
     printf("entre nombre c  ");
     scanf("%f",&c);
    
    som=a*2+b*3+c*5;
    moyenne=som/10;
    printf("la moyenne=%.2f",moyenne);
    

    return 0;
}